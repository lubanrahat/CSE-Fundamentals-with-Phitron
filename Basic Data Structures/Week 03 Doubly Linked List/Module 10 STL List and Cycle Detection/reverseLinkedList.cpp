#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
#define rep(i,n) for(int i=0;i<n;i++)
#define np nullptr

class Node {
    public:
        int data;
        Node* next;
        Node(int data) {
            this->data = data;
            this->next = np;
        }
};

void printList(Node* head) {
    Node* temp = head;
    while(temp != np) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void reverseList(Node* &head,Node* curr) {
    Node* temp = head;
    if(curr->next == np) {
        head = curr;
        return ;
    }
    reverseList(head,curr->next);
    curr->next->next = curr;
    curr->next = NULL;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    a->next = b;

    reverseList(head,head);

    printList(head);


    return 0;
}