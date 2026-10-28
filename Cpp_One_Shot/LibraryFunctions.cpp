#include<iostream>
#include<cmath>
using namespace std;
int min(int a, int b, int c){ 
    if(a <= b and a <= c) return a;
    else if(b <= c) return b;
    else return c;
}
int main(){
    // khud se banaya hai ye
    cout<<min(5,-3,4)<<endl; 
    cout<<max(7,4)<<endl;
    cout<<floor(-6.2)<<endl;
    cout<<(int)(-6.2)<<endl;
    cout<<sqrt(7.7)<<endl;
    cout<<cbrt(8)<<endl;
}