#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int k = 1; // extra variable
    for(int i=1;i<=n;i++){ // rows
        for(int j=1;j<=i;j++){ // cols
            cout<<k++<<" ";
        }
        cout<<endl;
    }
}