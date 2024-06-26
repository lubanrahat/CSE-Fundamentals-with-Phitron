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

void insert_head(Node* &head,int data) {
  Node* newNode = new Node(data);
  newNode->next=head;
  head=newNode;
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

  insert_head(head,10000);

  printLinkedList(head);

  return 0;
}