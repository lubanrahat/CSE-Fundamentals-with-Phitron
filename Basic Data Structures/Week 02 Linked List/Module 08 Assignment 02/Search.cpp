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

int search(Node* head,int x) {
  int i = 0;
  Node* temp = head;
  while(temp != NULL) {
    if(temp->data == x) {
      return i;
    }
    i++;
    temp=temp->next;
  }
  return -1;
}

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  int tt;
  cin>>tt;
  while(tt--) {
    Node* head = NULL;
    Node* tail = NULL;
    int data;
    while(true) {
      cin>>data;
      if(data == -1) break;
      insertAtTail(head,tail,data);
    }
    int x;
    cin>>x;

    cout<<search(head,x)<<endl;
  }

  

  return 0;
}