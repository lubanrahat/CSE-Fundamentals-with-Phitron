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

void insert(Node* &head,int data) {
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

bool isDuplicate(Node* head) {
  for(Node* i = head;i->next!=NULL;i=i->next) {
    for(Node* j=i->next;j!=NULL;j=j->next) {
      if(i->data == j->data) {
        return true;
      }
    }
  }
  return false;
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

  Node* head = NULL;
  while(true) {
    int data;
    cin>>data;
    if(data!=-1) {
      insert(head,data);
    }
    else {
      break;
    }
  }

  if(isDuplicate(head)) {
    cout<<"YES\n";
  }
  else {
    cout<<"NO\n";
  }

  return 0;
}