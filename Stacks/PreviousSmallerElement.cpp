class Solution {
  public:
    vector<int> prevSmaller(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n,-1);
        stack<int> st;
        for(int i=0;i<n;i++){ // forward loop
            // pop mark push
            while(st.size() > 0 and st.top() >= arr[i]) 
                st.pop();
            ans[i] = (st.size() != 0) ? st.top() : -1; 
            st.push(arr[i]);
        }
        return ans;
    }
};
