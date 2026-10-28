#include<iostream>
using namespace std;
void change(int x){
    x = 10;
}
int main(){
    int x = 5;
    change(x);
    cout<<x<<endl;
}