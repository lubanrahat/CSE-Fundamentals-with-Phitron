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

void insert_at_tail(Node* &head,int data) {
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

void printLinkedList(Node* head) {
  Node* temp = head;
  while(temp!=NULL) {
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
}

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  Node* head=NULL;
  int data;
  while(true) {
    cin>>data;
    if(data==-1) break;
    insert_at_tail(head,data);
  }

  printLinkedList(head);

  return 0;
}