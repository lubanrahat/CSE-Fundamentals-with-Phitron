#include <iostream>
#include <queue>
#include <ratio>

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

Node* input(void) {
    int data;
    Node* root;
    std::cin>>data;
    if(data == -1) {
        return nullptr;
    } else {
        root = new Node(data);
    }
    std::queue<Node*> q;
    if(root) q.push(root);
    while (!q.empty()) {
        Node* f = q.front();
        q.pop();
        int l,r;
        std::cin>>l>>r;
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

void printTree(Node* root) {
    std::queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty()) {
        Node* f = q.front();
        q.pop();
        std::cout<<f->data<<" ";
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
}

bool search(Node* root,int target) {
    if(root == nullptr) return false;
    if(root->data == target) return true;
    if(target < root->data) return search(root->left,target);
    else return search(root->right,target);
}

int binary_search(std::vector<int> arr,int target) {
    int left = 0,right = arr.size();
    while(left <= right) {
        int mid = left + (right-left) / 2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] < target) left = mid+1;
        else right = mid-1;
    }
    return -1;
}

int main() {

    Node* root = input();

    int target;
    std::cin>>target;

    if(search(root,target)) {
        std::cout<<"Target Node is found!"<<std::endl;
    } else {
        std::cout<<"Target Node is not found!"<<std::endl;
    }

    return 0;
}
