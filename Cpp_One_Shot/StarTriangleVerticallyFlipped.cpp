#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    // Method 2 (2 loops in 1 loop)
    for(int i=1;i<=n;i++){ // rows
        for(int j=1;j<=n-i;j++){ // spaces
            cout<<" "<<" ";
        }
        for(int j=1;j<=i;j++){ // stars
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
    // // Method 1 (Square)
    // for(int i=1;i<=n;i++){ // rows
    //     for(int j=1;j<=n;j++){ // cols
    //         if(i+j > n) cout<<"*"<<" ";
    //         else cout<<" "<<" ";
    //     }
    //     cout<<endl;
    // }
}