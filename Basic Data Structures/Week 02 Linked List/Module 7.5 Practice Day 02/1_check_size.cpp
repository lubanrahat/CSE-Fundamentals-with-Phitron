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

int sizeLinkedList(Node* head) {
  int cnt = 0;
  Node* temp = head;
  while(temp!=NULL) {
    cnt++;
    temp=temp->next;
  }
  return cnt;
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

  if(sizeLinkedList(head1) == sizeLinkedList(head2)) {
    cout<<"YES\n";
  }
  else {
    cout<<"NO\n";
  }

  return 0;
}