#include<iostream>
using namespace std;
int main(){
    float n;
    cout<<"Enter a Real Number: ";
    cin>>n;
    
    if(n == (int)n) 
        cout<<"Integer";
    else cout<<"Not an Integer";
}