#include<iostream>
using namespace std;
void fun(int x){ 
    cout<<x<<endl;
    if(x > 10) return;
    cout<<x*x<<endl;
}
int main(){
    fun(8);
}