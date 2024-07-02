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

    

    return 0;
}