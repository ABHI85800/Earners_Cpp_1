#include<iostream>
using namespace std;
int x = 9; // global variable
void change(){
    int x = 5; // local variable
    x = 19;
}
int main(){
    change();
    cout<<x<<endl;
    int x = 10;
    cout<<x<<endl;
    cout<<::x<<endl;
}