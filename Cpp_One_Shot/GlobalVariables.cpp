#include<iostream>
using namespace std;
int x = 9; // global variable
void fun(){
    x = 8;
}
int main(){
    fun();
    cout<<x<<endl;
}