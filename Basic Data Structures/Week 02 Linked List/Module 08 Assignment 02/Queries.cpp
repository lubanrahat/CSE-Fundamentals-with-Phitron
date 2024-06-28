#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
#define rep(i,n) for(int i=0;i<n;i++)

class Node {
  public:
    int data;
    Node* next;
    Node(int data) {
      this->data=data;
      this->next=NULL;
    }
};

void insertAPosition(Node* head,int position,int data) {
  Node* newNode = new Node(data);
  Node* temp = head;
  for(int i=1;i<=position-1;i++) {
    temp=temp->next;
  }
  newNode->next=temp->next;
  temp->next=newNode;
}

int sizeList(Node* head) {
  Node* temp = head;
  int count=0;
  while(temp!=NULL) {
    count++;
    temp=temp->next;
  }
  return count;
}

void insertAtHead(Node* &head,int data) {
  Node* newNode = new Node(data);
  newNode->next = head;
  head = newNode;
}
void deleteAtHead(Node* &head) {
  Node* deleteNode=head;
  head=head->next;
  delete deleteNode;
}

void deleteAtPosition(Node* &head,int position) {
  Node* temp=head;
  if(sizeList(temp) <= position) return;
  if(position == 0) {
    head=head->next;
    delete temp;
    return;
  }
  for(int i=1;i<position;i++) {
    temp=temp->next;
  }
  Node* deleteNode = temp->next;
  temp->next=temp->next->next;
  delete deleteNode;
}

void insertAtTail(Node* &head,Node* &tail,int data) {
  Node* newNode = new Node(data);
  if(head == NULL) {
    head = newNode;
    tail = newNode;
  }else {
    tail->next = newNode;
    tail = newNode;
  }
}

void insertAtTail(Node* &head,int data) {
  Node* newNode = new Node(data);
  if(head == NULL) {
    head = newNode;
    return;
  }
  Node* temp = head;
  while(temp->next != NULL) {
    temp=temp->next;
  } 
  temp->next=newNode;
}

void printList(Node* head) {
  Node* temp = head;
  while(temp != NULL) {
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
}

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  Node* head = NULL;

  int qq;
  cin>>qq;
  while(qq--) {
    int x,v;
    cin>>x>>v;

    if(x == 0) {
      insertAtHead(head,v);
    }else if(x == 1) {
      insertAtTail(head,v);
    }else if(x == 2) {
      deleteAtPosition(head,v);
    }

    printList(head);
  }

  return 0;
}