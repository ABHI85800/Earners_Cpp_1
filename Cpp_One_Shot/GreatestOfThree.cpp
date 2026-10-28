#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    
    if(a > b){
        if(a > c) cout<<a<<" is greatest";
        else // c >= a > b
            cout<<c<<" is greatest";
    }
    else{ // b >= a
        if(b > c) cout<<b<<" is greatest";
        else // c >= b >= a
            cout<<c<<" is greatest";
    }
    
    // if(a >= b && a >= c){
    //     cout<<a<<" is greatest"<<endl;
    //     cout<<"Hooray";
    // }
    // else if(b >= c)
    //     cout<<b<<" is greatest";
    // else cout<<c<<" is greatest";
}