#include<iostream>
using namespace std;
int main(){
    int a = 5, b = 2;
    // Method 2
    a = a + b;
    b = a - b;
    a = a - b;
    
    // // Method 1
    // int temp = a;
    // a = b;
    // b = temp;
    cout<<a<<endl;
    cout<<b<<endl;
}