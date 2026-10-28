#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    // 2 6 18 54 ...
    int a = 2, r = 3;
    for(int i=1;i<=n;i++){ 
        cout<<a<<" ";
        a *= r;
    }
}