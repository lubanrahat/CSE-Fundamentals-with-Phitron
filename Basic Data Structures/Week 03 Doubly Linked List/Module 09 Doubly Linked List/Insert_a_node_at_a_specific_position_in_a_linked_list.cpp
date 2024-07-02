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
        return;
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

void insertHead(Node* &head,int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void insearAtAnyPosition(Node* head,int position,int data) {
    Node* newNode = new Node(data);
    Node* temp = head;
    for(int i=1;i<=position-1;i++) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
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
        insertAtTail(head,data);
    }
    int insertData,position;
    cin>>insertData>>position;
    if(position == 0) {
        insertHead(head,insertData);
    }
    else {
        insearAtAnyPosition(head,position,insertData);
    }

    printLinkedList(head);

    return 0;
}