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
        this->next = np;
    }
};

class DoublyLinkedList {
public:
    DoublyLinkedListNode* head;
    DoublyLinkedListNode* tail;
    DoublyLinkedList() {
        this->head = np;
        this->tail = np;
    }

    int sizeOfList(void) {
        DoublyLinkedListNode* temp = this->head;
        int count = 0;
        while(temp != np) {
            count++;
            temp = temp->next;
        }
        return count;
    }

    void printList(void) {
        DoublyLinkedListNode* temp = this->head;
        while(temp != np) {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    void reversePrintList(void) {
        DoublyLinkedListNode* temp = head;
        while(temp != np) {
            cout<<temp->data<<" ";
            temp = temp->prev;
        }
        cout<<endl;
    }

    void insertAnyPosition(int position,int data) {

        if(position >= sizeOfList()) {
            cout<<"Invalid Index!";
            return ;
        }

        DoublyLinkedListNode* newNode = new DoublyLinkedListNode(data);
        DoublyLinkedListNode* temp = head;

        for(int i=1;i<=position-1;i++) {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;

        temp->next->prev = newNode;
        newNode->prev = temp;

    }

    void insertHead(int data) {
        DoublyLinkedListNode* newNode = new DoublyLinkedListNode(data);
        if(head == np) {
            head = newNode;
            tail = newNode;
            return ;
        }
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    void insertTail(void) {
        
    }

};

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    DoublyLinkedList list;

    list.insertHead(10);
    list.insertHead(20);
    list.insertHead(30);
    list.insertHead(40);
    list.insertHead(50);
    list.insertHead(60);
    list.insertHead(70);
    list.insertHead(80);
    list.insertHead(100);

    list.printList();



    return 0;
}