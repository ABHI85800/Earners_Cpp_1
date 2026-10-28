#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    bool flag = false; // false means prime
    for(int i=2;i<=n-1;i++){
        if(n%i == 0){ 
            flag = true; // true means composite
            break;
        }
    }
    if(n == 1) cout<<"Neither Prime nor Composite"<<endl;
    else if(flag == false) cout<<"Prime"<<endl;
    else cout<<"Composite"<<endl;
    
}