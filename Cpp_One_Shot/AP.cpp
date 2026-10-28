#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    // Method 2 - 4 9 14 19 ... 
    int a = 4, d = 5;
    for(int i=1;i<=n;i++){ 
        cout<<a<<" ";
        a += d;
    }
    
    // // Method 1 - 2 5 8 11 ...
    // for(int i=2;i<=3*n-1;i+=3){ 
    //     cout<<i<<" ";
    // }
}