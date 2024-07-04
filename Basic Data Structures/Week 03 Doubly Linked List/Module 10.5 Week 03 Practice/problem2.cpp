#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
#define rep(i,n) for(int i=0;i<n;i++)

class DoublyLinkedListNode {
public:
    DoublyLinkedListNode* prev;
    int data;
    DoublyLinkedListNode* next;
    DoublyLinkedListNode(int data) {
        this->prev = NULL;
        this->data = data;
        this->next = NULL;
    }
};

void displayForward(DoublyLinkedListNode* head) {
    DoublyLinkedListNode* current = head;
    while(current != NULL) {
        cout<<current->data<<" ";
        current = current->next;
    }
    cout<<endl;
}

void displayBackward(DoublyLinkedListNode* tail) {
    DoublyLinkedListNode* current = tail;
    while(current != NULL) {
        cout<<current->data<<" ";
        current = current->prev;
    }
    cout<<endl;
}
int sizeOfList(DoublyLinkedListNode* head) {
    DoublyLinkedListNode* current = head;
    int count = 0;
    while(current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

void insertAtBeginning(DoublyLinkedListNode* &head,DoublyLinkedListNode* &tail,int data) {
    DoublyLinkedListNode* newNode = new DoublyLinkedListNode(data);
    if(head == NULL) {
        head = tail = newNode;
    }else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insertAtPosition(DoublyLinkedListNode* head,int key,int data) {
    DoublyLinkedListNode* newNode = new DoublyLinkedListNode(data);
    DoublyLinkedListNode* current = head;
    rep(i,key-1) {
        current = current->next;
    }
    newNode->next = current->next;
    current->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = current;
}

void insertAtEnd(DoublyLinkedListNode* &head,DoublyLinkedListNode* &tail,int data) {
    DoublyLinkedListNode* newNode = new DoublyLinkedListNode(data);
    if(tail == NULL) {
        head = tail = newNode;
    }else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void deleteAtBeginning(DoublyLinkedListNode* &head,DoublyLinkedListNode* &tail) {
    DoublyLinkedListNode* deleteNode = head;
    head = head->next;
    delete deleteNode;
    if(head == NULL) {
        tail = NULL;
        return ;
    }
    head->prev = NULL;
}

void deleteAtEnd(DoublyLinkedListNode* &head,DoublyLinkedListNode* &tail) {
    DoublyLinkedListNode* deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    if(tail == NULL) {
        head = NULL;
        return ;
    }
    tail->next = NULL;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    DoublyLinkedListNode* head = NULL;
    DoublyLinkedListNode* tail = NULL;

    

    return 0;
}