#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int mid = n/2 + 1;
    for(int i=1;i<=n;i++){ // rows
        for(int j=1;j<=n;j++){ // cols
            if(i==mid or j==mid) cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}