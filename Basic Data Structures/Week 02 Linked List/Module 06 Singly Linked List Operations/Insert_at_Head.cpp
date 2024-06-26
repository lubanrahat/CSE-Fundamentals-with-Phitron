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

void insert_any_position(Node* head,int position,int data) {
  Node* newNode = new Node(data);
  Node* temp = head;
  for(int i=1;i<position-1;i++) {
    temp = temp->next;
  }
  newNode->next=temp->next;
  temp->next=newNode;
}

void insert_at_head(Node* &head,int data) {
  Node* newNode = new Node(data);
  newNode->next = head;
  head = newNode;
}

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  Node* head=NULL;

  while(true) {
    cout<<"Option 1: insert tail"<<endl;
    cout<<"Option 2: Insert any Position"<<endl;
    cout<<"Option 3: Insert head position"<<endl;
    cout<<"Option 4: Print Linked List"<<endl;
    cout<<"Option 5: Break"<<endl;
    int option;
    cin>>option;
    if(option==1) {
      int data;
      cin>>data;
      insert_at_tail(head,data);
    }
    else if(option==2) {
      int data,position;
      cin>>position>>data;
      insert_any_position(head,position,data);
    }
    else if(option==3) {
      int data;
      cin>>data;
      insert_at_head(head,data);
    }
    else if(option==4) {
      printLinkedList(head);
    }
    else if(option==4) {
      break;
    }
  }


  return 0;
}