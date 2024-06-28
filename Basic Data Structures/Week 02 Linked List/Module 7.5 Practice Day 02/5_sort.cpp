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

void insertAtHead(Node* &head,int data) {
  Node* newNode = new Node(data);
  newNode->next = head;
  head = newNode;
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

void printList(Node* head) {
  Node* temp = head;
  while(temp != NULL) {
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
}

void sorted(Node* head) {
  Node* temp = head;
  for(Node* i=temp;i->next!=NULL;i=i->next) {
    for(Node* j=i->next;j!=NULL;j=j->next) {
      if(i->data < j->data) {
        swap(i->data,j->data);
      }
    }
  }
}

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  Node* head = NULL;
  Node* tail = NULL;
  int data;
  while(true) {
    cin>>data;
    if(data == -1) break;
    insertAtTail(head,tail,data);
  }
  sorted(head);
  printList(head);

  return 0;
}