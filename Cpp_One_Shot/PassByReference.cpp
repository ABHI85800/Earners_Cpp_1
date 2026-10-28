#include<iostream>
using namespace std;
void change(int* ptr){ // pass by reference
    *ptr = 90;
}
int main(){
    int x = 10;
    change(&x);
    cout<<x<<endl;
}

// void change(int& x){ // pass by reference
//     x = 90;
// }
// int main(){
//     int x = 10;
//     change(x);
//     cout<<x<<endl;
// }