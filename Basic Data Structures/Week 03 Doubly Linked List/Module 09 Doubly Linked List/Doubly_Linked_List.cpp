#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
#define rep(i,n) for(int i=0;i<n;i++)
#define np nullptr

class DoublyLinkedListNode {
public:
    DoublyLinkedListNode* prev;
    int data;
    DoublyLinkedListNode* next;
    DoublyLinkedListNode(int data) {
        this->prev = np;
        this->data = data;
        this->next = next;
    }
};

void printList(DoublyLinkedListNode* head) {
    DoublyLinkedListNode* temp = head;
    while(temp != np) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void reversePrintList(DoublyLinkedListNode* tail) {
    DoublyLinkedListNode* temp = tail;
    while(temp != np) {
        cout<<temp->data<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    DoublyLinkedListNode* head = new DoublyLinkedListNode(10);
    DoublyLinkedListNode* a = new DoublyLinkedListNode(20);
    DoublyLinkedListNode* b = new DoublyLinkedListNode(30);
    DoublyLinkedListNode* c = new DoublyLinkedListNode(40);
    DoublyLinkedListNode* d = new DoublyLinkedListNode(50);
    DoublyLinkedListNode* tail = d;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    c->next = d;
    d->prev = c;

    printList(head);
    reversePrintList(tail);

    return 0;
}