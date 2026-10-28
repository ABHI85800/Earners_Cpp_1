#include<iostream>
using namespace std;
int main(){
    double radius;
    cout<<"Enter Radius: ";
    cin>>radius;
    double volume = 4.0 / 3 * 3.141592 * radius * radius * radius;
    cout<<"Volume is: "<<volume;
}