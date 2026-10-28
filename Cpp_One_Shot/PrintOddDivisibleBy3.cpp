#include<iostream>
using namespace std;
int main(){
    // Method 4 - 17 Iterations
    for(int i=3;i<=99;i+=6){
        cout<<i<<" ";
    }
    
    // // Method 3 - 33 Iterations
    // for(int i=3;i<=99;i+=3){
    //     if(i%2 == 1) cout<<i<<" ";
    // }
    
    // // Method 2 - 50 Iterations
    // for(int i=1;i<=99;i+=2){
    //     if(i%3 == 0) cout<<i<<" ";
    // }
    
    // // Method 1 - 100 Iterations
    // for(int i=1;i<=100;i++){
    //     if(i%3 == 0 and i%2 == 1)
    //         cout<<i<<" ";
    // }
}