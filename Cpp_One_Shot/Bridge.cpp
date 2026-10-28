#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    // Base (2n-1 stars)
    for(int i=1;i<=2*n-1;i++){
        cout<<"* ";
    }
    cout<<endl;
    // Bridge
    n--;
    int nsp = 1, nst = n;
    for(int i=1;i<=n;i++){ // lines
        for(int j=1;j<=nst;j++){ // stars
            cout<<"*"<<" "; 
        }
        for(int j=1;j<=nsp;j++){ // spaces
            cout<<" "<<" "; 
        }
        for(int j=1;j<=nst;j++){ // stars
            cout<<"*"<<" "; 
        }
        nsp += 2;
        nst--;
        cout<<endl;
    }
    
    // // Method 1 (nsp,nst)
    // // Upper Pyramid
    // int nsp = n-1, nst = 1;
    // for(int i=1;i<=n;i++){ // rows
    //     for(int j=1;j<=nsp;j++){ // spaces
    //         cout<<"  ";
    //     }
    //     for(int j=1;j<=nst;j++){ // stars
    //         cout<<"* ";
    //     }
    //     nsp--;
    //     nst += 2;
    //     cout<<endl;
    // }
    // // Lower Pyramid (Ulta)
    // nsp = 1; 
    // nst = 2*n-3;
    // for(int i=1;i<=n-1;i++){ // rows
    //     for(int j=1;j<=nsp;j++){ // spaces
    //         cout<<"  ";
    //     }
    //     for(int j=1;j<=nst;j++){ // stars
    //         cout<<"* ";
    //     }
    //     nsp++;
    //     nst -= 2;
    //     cout<<endl;
    // }
}