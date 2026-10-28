#include<iostream>
using namespace std;
void starTriangle(int n){ // n is parameter
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
int main(){
    starTriangle(5); // 5 is argument
    starTriangle(7); 
    starTriangle(3);
}