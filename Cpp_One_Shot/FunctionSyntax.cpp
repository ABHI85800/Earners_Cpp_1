#include<iostream>
using namespace std;
void greeting(){
    cout<<"Hello"<<endl;
    cout<<"How Are you"<<endl;
}
void fun(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
int main(){
    cout<<"Ye upar print hoga"<<endl;
    fun(); // call lagai
    cout<<"Ye neeche print hoga"<<endl;
    greeting();
    fun();
}