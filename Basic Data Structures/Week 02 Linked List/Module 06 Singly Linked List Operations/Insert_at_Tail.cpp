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

void insert_any_position(Node* head,int position,int data) {
  Node* newNode = new Node(data);
  Node* temp = head;
  for(int i=1;i<position-1;i++) {
    temp = temp->next;
  }
  newNode->next=temp->next;
  temp->next=newNode;
}

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

  while(true) {
    cout<<"Option 1: insert Data"<<endl;
    cout<<"Option 2: Break"<<endl;
    int option;
    cin>>option;
    if(option==1) {
      int data;
      cin>>data;
      insert_at_tail(head,data);
    }
    else if(option==2) {
      break;
    }
  }

  printLinkedList(head);

  return 0;
}