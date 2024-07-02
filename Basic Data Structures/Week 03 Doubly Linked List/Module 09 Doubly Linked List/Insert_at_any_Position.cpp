#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
#define rep(i,n) for(int i=0;i<n;i++)

class Node{
    public:
       Node* prev;
       int data;
       Node* next;
       Node(int data) {
           this->prev = NULL;
           this->data = data;
           this->next = next;
       }
};

void printList(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void reversePrintList(Node* tail) {
    Node* temp = tail;
    while(temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}

void insertAtPosition(Node* head,int position,int data) {
    Node* newNode = new Node(data);
    Node* temp = head;
    for(int i=1;i<position;i++) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = temp;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* tail = d;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    c->next = d;
    d->prev = c;

    insertAtPosition(head,5,10000);

    printList(head);
    reversePrintList(tail);

    return 0;
}