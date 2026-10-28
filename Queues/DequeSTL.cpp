#include<iostream>
#include<queue>
using namespace std;
void print(deque<int>& dq){
    int n = dq.size();
    while(n--){
        cout<<dq.front()<<" ";
        dq.push_back(dq.front());
        dq.pop_front();
    }
    cout<<endl;
}
void pushAtIdx(int idx, int ele, deque<int>& dq){
    
}
void popAtIdx(int idx, deque<int>& dq){
    
}
int getAtIdx(int idx, deque<int>& dq){
    
}
int main(){
    deque<int> dq;
    dq.push_back(10); // q me push
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_front(50); // 50 10 20 30 40
    print(dq);
}