#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    
    // Method 2
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
    // // Method 1
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n+1-i;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }
}