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

void insert_tail(Node* &head,int data) {
  Node* newNode = new Node(data);
  if(head == NULL) {
    head=newNode;
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

int sizeOfLinkedList(Node* head) {
  Node* temp = head;
  int count = 0;
  while(temp!=NULL) {
    count++;
    temp=temp->next;
  }
  return count;
}

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  Node* head = NULL;

  while(1) {
    int data;
    cin>>data;
    if(data==-1) break;
    else {
      insert_tail(head,data);
    }
  }

  int sizeLinkedList = sizeOfLinkedList(head);
  cout<<sizeLinkedList<<endl;
  return 0;
}