#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter Marks: ";
    cin>>marks;
    
    if(marks > 90) cout<<"A";
    else{
        if(marks > 70) cout<<"B";
        else{
            if(marks > 50) cout<<"C";
            else{
                if(marks >= 33) cout<<"D";
                else cout<<"Fail";
            }
        }
    }
    
    // if(marks > 90) cout<<"A";
    // else if(marks > 70) cout<<"B";
    // else if(marks > 50) cout<<"C";
    // else if(marks >= 33) cout<<"D";
    // else cout<<"Fail";
}