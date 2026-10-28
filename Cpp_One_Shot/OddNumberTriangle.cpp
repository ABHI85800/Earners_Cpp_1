#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    
    // Method 2
    for(int i=1;i<=n;i++){ // rows
        for(int j=1;j<=2*i-1;j+=2){ // cols
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    // Method 1
    for(int i=1;i<=n;i++){ // rows
        for(int j=1;j<=i;j++){ // cols
            cout<<2*j-1<<" ";
        }
        cout<<endl;
    }
}