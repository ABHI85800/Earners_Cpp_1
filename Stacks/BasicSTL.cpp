#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(10); // add at top
    st.push(20);
    st.push(30);
    st.pop(); // remove the top
    st.push(40);
    cout<<st.size()<<endl;
}
