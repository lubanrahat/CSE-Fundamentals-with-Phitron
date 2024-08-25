#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef unsigned long long u64;
typedef unsigned u32;
#define PI 3.1415926535897932384626
#define rep(i,n) for(int i = 0; i < n; i++)
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

Node* inputBinaryTree(void) {
    int data;
    cin>>data;
    Node* root;
    if(data == -1) {
        root = nullptr;
    } else {
        root = new Node(data);
    }
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty()) {
        Node* f = q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        Node* left,*right;
        if(l == -1) {
            left = nullptr;
        } else {
            left = new Node(l);
        }
        if(r == -1) {
            right = nullptr;
        } else {
            right = new Node(r);
        }
        f->left = left;
        f->right = right;
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    return root;
}

void printLavelOrder(Node* root) {
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty()) {
        Node* f = q.front();
        cout<<f->data<<" ";
        if(root->left) q.push(root->left);
        if(root->right) q.push(root->right);
    }
}

void insertBST(Node* &root,int data) {
    if(root == nullptr) {
        root = new Node(data);
    } else if(data < root->data) {
        if(root->left == nullptr) {
            root->left = new Node(data);
        } else {
            insertBST(root->left,data);
        }
    } else {
        if(root->right == nullptr) {
            root->right = new Node(data);
        } else {
            insertBST(root->right,data);
        }
    }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Node* root = inputBinaryTree();
    int data;
    cin>>data;
    insertBST(root,data);

    return 0;
}