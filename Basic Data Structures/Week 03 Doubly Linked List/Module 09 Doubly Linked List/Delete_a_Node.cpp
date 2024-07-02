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

void insertAtTail(Node* &head,int data) {
    Node* newNode = new Node(data);
    if(head == NULL) {
        head = newNode;
        return ;
    }
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void printLinkedList(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void deleteHead(Node* &head) {
    Node* temp = head;
    head = temp->next;
    delete temp;
}

void deleteAnyPosition(Node* head,int position) {
    Node* temp = head;
    rep(i,position-1) {
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    Node* head = NULL;
    int tt,data;
    cin>>tt;
    rep(i,tt) {
        cin>>data;
        insertAtTail(head,data);
    }
    int position;
    cin>>position;
    
    if(position == 0) {
        deleteHead(head);
    }else {
        deleteAnyPosition(head,position);
    }

    printLinkedList(head);

    return 0;
}