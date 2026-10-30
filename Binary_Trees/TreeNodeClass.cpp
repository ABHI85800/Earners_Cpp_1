#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        left = right = NULL;
    }
};

int sumOfTree;
int sizeOfTree;
int maxOfTree;

void printTree(Node* root){
    if(root == NULL) return;
    // sumOfTree += root->val;
    // sizeOfTree += 1;
    // maxOfTree = max(maxOfTree,root->val);
    cout<<root->val<<" ";
    printTree(root->left);
    printTree(root->right);
}

void dfs(Node* root){
    if(root == NULL) return;
    dfs(root->left);
    dfs(root->right);
    cout<<root->val<<" "; // work
}

int size(Node* root){
    if(root == NULL) return 0;
    return 1 + size(root->left) + size(root->right);
}

int sum(Node* root){
    if(root == NULL) return 0;
    return root->val + sum(root->left) + sum(root->right);
}

int maxInTree(Node* root){
    if(root == NULL) return INT_MIN;
    int leftMax = maxInTree(root->left);
    int rightMax = maxInTree(root->right);
    return max(root->val,max(leftMax,rightMax));
}

int levels(Node* root){
    if(root == NULL) return 0;
    return 1 + max(levels(root->left),levels(root->right));
}

int main(){
    Node* a = new Node(1); // root
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(8);
    Node* h = new Node(9);

    a->left = b; a->right = c;
    b->left = d; b->right = e;
    c->right = f;
    e->left = g; e->right = h;

    cout<<size(a)<<endl;
    cout<<sum(a)<<endl;
    cout<<maxInTree(a)<<endl;

    // sumOfTree = 0;
    // sizeOfTree = 0;
    // maxOfTree = INT_MIN;
    // printTree(a);
    // cout<<sumOfTree<<endl;

    // cout<<a->val<<endl;
    // cout<<a->left->val<<endl;
    // cout<<a->right->val<<endl;
    // cout<<a->left->left->val<<endl;
    // cout<<a->left->right->val<<endl;
    // cout<<a->right->right->val<<endl;
}