#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    if(n%5 == 0 && n%3 == 0)
        cout<<"Sachin";
    else if(n%5 == 0) 
        cout<<"Virat";
    else if(n%3 == 0) 
        cout<<"Rohit";
    else cout<<"Bumrah";
    
    // if(n%5 == 0 && n%3 != 0) 
    //     cout<<"Virat";
    // else if(n%3 == 0 && n%5 != 0) 
    //     cout<<"Rohit";
    // else if(n%5 == 0 && n%3 == 0)
    //     cout<<"Sachin";
    // else cout<<"Bumrah";
}