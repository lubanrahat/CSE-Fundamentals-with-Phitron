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
    if(temp==NULL) {
      cout<<"Invalid index!";
      return;
    }
  }
  newNode->next=temp->next;
  temp->next=newNode;
}

void insert_at_head(Node* &head,int data) {
  Node* newNode = new Node(data);
  newNode->next = head;
  head = newNode;
}

void delete_from_position(Node* head,int position) {
  Node* temp=head;
  for(int i=1;i<position-1;i++) {
    temp=temp->next;
    if(temp==NULL) {
      cout<<"Invalid index!"<<endl;
      return ;
    }
  }
  if(temp==NULL) {
    cout<<"Invalid index!"<<endl;
    return ;
  }
  Node* deleteNode = temp->next;
  temp->next=temp->next->next;
  delete deleteNode;
}

void delete_head(Node* &head) {
  Node* deleteNode=head;
  head=head->next;
  delete deleteNode;
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
    cout<<"Option 4: Delete any Position"<<endl;
    cout<<"Option 5 Delete Head"<<endl;
    cout<<"Option 6: Print Linked List"<<endl;
    cout<<"Option 7: Break"<<endl;
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
    else if(option == 4) {
      int position;
      cin>>position;
      delete_from_position(head,position);
    }
    else if(option == 5) {
      delete_head(head);
    }
    else if(option==6) {
      printLinkedList(head);
    }
    else if(option==7) {
      break;
    }
  }


  return 0;
}