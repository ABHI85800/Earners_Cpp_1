#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"Enter Cost Price: ";
    cin>>cp;
    cout<<"Enter Selling Price: ";
    cin>>sp;
    
    if(sp > cp) cout<<"Profit is "<<sp-cp;
    else { // cp >= sp
        if(cp > sp) cout<<"Loss is "<<cp-sp;
        else cout<<"No Profit no Loss";
    }
}