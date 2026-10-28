#include<iostream>
using namespace std;
int main(){
    char ch2 = '?';
    int x2 = (int)ch2; // explicit typecasting
    cout<<x2<<endl; 
    
    char ch = 'A';
    int x = ch; // implicit typecasting
    cout<<x<<endl;
    
    char ch3 = '@';
    cout<<ch3+0<<endl;
}