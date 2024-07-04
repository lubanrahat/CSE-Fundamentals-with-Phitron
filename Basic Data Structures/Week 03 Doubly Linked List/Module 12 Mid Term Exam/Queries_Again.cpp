#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node* next;
        Node* prev;

    Node(int val) {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);
    if(head == NULL) {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=tail->next;
}

void insert_head(Node* &head,Node* &tail,int val) {
     Node* newnode = new Node(val);
    if(head == NULL) {
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}

int sizeOfList(Node* head) {
    Node* temp = head;
    int count = 0;
    while(temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

void insert_position(Node* head,int pos,int val) {
    Node* newnode = new Node(val);
    Node* tmp = head;
    for( int i=1;i<=pos-1;i++) {
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    newnode->next->prev=newnode;
    newnode->prev=tmp;
}

void displayForward(Node* head) {
    Node* current = head;
    cout<<"L -> ";
    while(current != NULL) {
        cout<<current->val<<" ";
        current = current->next;
    }
    cout<<endl;
}

void displayBackward(Node* tail) {
    Node* current = tail;
    cout<<"R -> ";
    while(current != NULL) {
        cout<<current->val<<" ";
        current = current->prev;
    }
    cout<<endl;
}


int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int q;
    cin>>q;

    while(q--) {
        int x,value;
        cin>>x>>value;
        if(x > sizeOfList(head)) {
            cout<<"Invalid\n";
        }else if(x == 0) {
            insert_head(head,tail,value);
        }else if(x == sizeOfList(head)) {
            insert_at_tail(head,tail,value);
        }else {
            insert_position(head,x,value);
        }
        if(x > sizeOfList(head)) continue;
        else {
            displayForward(head);
            displayBackward(tail);
        }
    }

    return 0;
}