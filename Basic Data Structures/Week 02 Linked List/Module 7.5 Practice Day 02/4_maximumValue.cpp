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

int maxValue(Node* head) {
  Node* temp = head;
  int maxVal = INT_MIN;
  while(temp != NULL) {
    if(temp->data > maxVal) maxVal = temp->data;
    temp=temp->next;
  }
  return maxVal;
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

  cout<<maxValue(head)<<endl;;

  return 0;
}