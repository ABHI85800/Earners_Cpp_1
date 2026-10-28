#include<iostream>
using namespace std;
void power(int a, int b){ // n is parameter
    int p = 1;
    for(int i=1;i<=b;i++){
        p *= a;
    }
    cout<<p<<endl;
}
int main(){
    power(2,9);
    power(3,7);
}