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

void insert(Node* head,int position,int data) {
  Node* newNode = new Node(data);
  Node* temp = head;
  for(int i=1;i<=position-1;i++) {
    temp=temp->next;
  }
  newNode->next=temp->next;
  temp->next=newNode;
}

void printLinkedList(Node* head) {
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

  Node* head = new Node(10);
  Node* a = new Node(20);
  Node* b = new Node(30);
  Node* c = new Node(40);
  Node* d = new Node(50);

  head->next=a;
  a->next=b;
  b->next=c;
  c->next=d;

  insert(head,3,100);
  insert(head,2,-999);
  printLinkedList(head);

  return 0;
}