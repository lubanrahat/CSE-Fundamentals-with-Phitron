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

int sizeList(Node* head) {
  Node* temp = head;
  int count=0;
  while(temp!=NULL) {
    count++;
    temp=temp->next;
  }
  return count;
}

bool Same_to_Same(Node* head1,Node* head2) {
  Node* temp1 = head1;
  Node* temp2 = head2;

  if(sizeList(head1) == 1 && sizeList(head2) == 1) {
      if(temp1->data == temp2->data) {
        return true;
      }else {
        return false;
      }
  }
  while(temp1 != NULL && temp2 != NULL)  {
    if(temp1->data!=temp2->data) return false;
    temp1=temp1->next;
    temp2=temp2->next;
  }
  
  return (temp1 == NULL && temp2 == NULL);
}

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  Node* head1 = NULL;
  Node* tail1 = NULL;
  Node* head2 = NULL;
  Node* tail2 = NULL;
  int data;
  while(true) {
    cin>>data;
    if(data == -1) break;
    insertAtTail(head1,tail1,data);
  }

  while(true) {
    cin>>data;
    if(data == -1) break;
    insertAtTail(head2,tail2,data);
  }

  if(Same_to_Same(head1,head2)) {
    cout<<"YES\n";
  }else {
    cout<<"NO\n";
  }  

  return 0;
}