class Solution {
  public:
    int operation(int& a, int& b, string& op){
        if(op == "+") return a + b;
        else if(op == "-") return a - b;
        else if(op == "*") return a * b;
        else if(op == "^") return pow(a,b);
        else{ // op == "/"
            // return a/b; // wrong
            return floor(float(a)/b);
        }
    }
    int evaluatePostfix(vector<string>& arr) {
        stack<int> st;
        for(string s : arr){
            if(s=="+" or s=="-" or s=="*" or s=="/" or s=="^" ){ // work
                int b = st.top(); 
                st.pop();
                int a = st.top(); 
                st.pop();
                st.push(operation(a,b,s));
            }
            else st.push(stoi(s));
        }
        return st.top();
    }
};
