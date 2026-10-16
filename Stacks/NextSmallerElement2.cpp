class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n,-1);
        stack<int> st;
        // put all arr elements in stack
        for(int i=n-1;i>=0;i--){ // reverse loop 
            st.push(arr[i]);
        }
        for(int i=n-1;i>=0;i--){ // reverse loop
            // pop mark push
            while(st.size() > 0 and st.top() <= arr[i]) 
                st.pop();
            ans[i] = (st.size() != 0) ? st.top() : -1; 
            st.push(arr[i]);
        }
        return ans;
    }
};
