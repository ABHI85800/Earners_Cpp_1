#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    
    for(int i=1;i<=n;i++){ // rows
        for(int j=1;j<=2*i-1;j++){ // cols
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}