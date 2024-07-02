#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
#define rep(i,n) for(int i=0;i<n;i++)

class Node {
    public:
        int data;
        Node* next;
        Node(int data) {
            this->data = data;
            this->next = NULL;
        }
};

void insertHead(Node* &head,int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void printLinkedList(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    Node* head = NULL;
    int tt,data;
    cin>>tt;
    while(tt--) {
        cin>>data;
        insertHead(head,data);
    }
    printLinkedList(head);

    return 0;
}