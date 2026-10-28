#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int* ptr = &x;
    *ptr = 27; // x = 27
    (*ptr)++; // x = 28
    cout<<x<<endl;
}

#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int* ptr = &x;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    
    float y = 3.14;
    float* p = &y;
}