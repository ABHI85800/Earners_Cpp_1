#include<iostream>
using namespace std;
int sum(int a, int b, int c){ 
    cout<<"Hello Bhai"<<endl;
    return a+b+c;
}
int main(){
    int ans = sum(4,-5,8);
    cout<<ans;
}