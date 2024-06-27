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

void getDifference(Node* head) {
  int minValu = INT_MAX,maxValu=INT_MIN,cnt = 0;
  Node* temp = head;
  while(temp != NULL) {
   if(temp->data > maxValu) maxValu = temp->data;
   if(temp->data < minValu) minValu = temp->data;    
    temp=temp->next;
  }
  cout<<maxValu-minValu<<endl;
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

  getDifference(head);

  return 0;
}