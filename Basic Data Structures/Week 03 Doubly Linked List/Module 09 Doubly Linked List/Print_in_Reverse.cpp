#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
#define rep(i,n) for(int i=0;i<n;i++)
#define np nullptr

class SinglyLinkedListNode {
public:
    int data;
    SinglyLinkedListNode* next;

    SinglyLinkedListNode(int data) {
        this->data = data;
        this->next = np;
    }
};
class SinglyLinkedList {
public:
    SinglyLinkedListNode* head;
    SinglyLinkedListNode* tail;

    SinglyLinkedList() {
        this->head = np;
        this->tail = np;
    } 

    void insertNode(int data) {
        SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
        if(!this->head) {
            this->head = newNode;
        }else {
            this->tail->next = newNode;
        }
        this->tail = newNode;
    }
    void insertAtHead(int data) {
        SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
        newNode->next = head;
        head = newNode;
    } 
    void deleteNode(int key) {
        SinglyLinkedListNode* temp = head;
        for(int i = 1; i <= key-1; i++) {
            temp = temp->next;
        }
        SinglyLinkedListNode* deleteNode = temp->next;
        temp->next = temp->next->next;
        delete deleteNode;
    }  
    void deleteHead(void) {
        SinglyLinkedListNode* temp = head;
        head = temp->next;
        delete temp;
    }
    int sizeOfList(void) {
        SinglyLinkedListNode* temp = head;
        int count = 0;
        while(temp != np) {
            count++;
            temp = temp->next;
        }
        return count;
    }
    void display(void) {
        SinglyLinkedListNode* temp = head;
        while(temp != np) {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    SinglyLinkedList list;

    
    
    return 0;
}