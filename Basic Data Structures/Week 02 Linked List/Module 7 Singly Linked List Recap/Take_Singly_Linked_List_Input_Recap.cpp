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

void insert_tail(Node* &head,Node* &tail,int data) {
  Node* newNode = new Node(data);
  if(head == NULL) {
    head = newNode;
    tail = newNode;
    return ;
  }
  tail->next = newNode;
  tail = newNode;
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

  Node* head = NULL;
  Node* tail = NULL;
  while(1) {
    int data;
    cin>>data;
    if(data==-1) break;
    else {
      insert_tail(head,tail,data);
    }
  }
  printLinkedList(head);
  return 0;
}