#include<iostream>
using namespace std;
class Queue{
private:
    int length;
    int f;
    int r;
    vector<int> arr;
public:
    Queue(int capacity){ // f to r-1 queue
        f = 0;
        r = 0;
        length = 0;
        arr.resize(capacity,0);
    }
    void push(int val){
        if(length == arr.size()){
            cout<<"Queue is Full!"<<endl;
            return;
        }
        if(r == arr.size()) r = 0; // IMP
        arr[r++] = val;
        length++;
    }
    void pop(){
        if(length == 0){
            cout<<"Queue is Empty!"<<endl;
            return;
        }
        if(f == arr.size()) f = 0; // IMP
        f++;
        length--;
    }
    int front(){
        if(length == 0){
            cout<<"Queue is Empty!"<<endl;
            return -1;
        }
        return arr[f];
    }
    int size(){
        return length;
    }
    int capacity(){
        return arr.size();
    }
    void display(){
        if(length == 0) return;
        if(r <= f){ // special
            for(int i=f;i<arr.size();i++){
                cout<<arr[i]<<" ";
            }
            for(int i=0;i<r;i++){
                cout<<arr[i]<<" ";
            }
        }
        else{ // f to r-1 print
            for(int i=f;i<r;i++){
                cout<<arr[i]<<" ";
            }
        }
        cout<<endl;
    }
};
int main(){
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.display();
    q.pop();
    q.push(40);
    q.push(50);
    q.display();
    q.pop();
    q.push(60);
    q.display();
}