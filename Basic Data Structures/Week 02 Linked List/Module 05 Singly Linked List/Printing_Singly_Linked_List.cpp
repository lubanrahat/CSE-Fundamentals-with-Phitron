#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
#define rep(i,n) for(int i=0;i<n;i++)

class Node {
  public:
    int val;
    Node* next;
    Node(int val) {
      this->val=val;
      this->next=NULL;
    }
};

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  Node* head = new Node(10);
  Node* a = new Node(20);
  Node* b = new Node(30);
  Node* c = new Node(40);
  Node* d = new Node(50);
  Node* e = new Node(60);
  Node* f = new Node(70);
  Node* g = new Node(80);

  head->next=a;
  a->next=c;
  c->next=d;
  d->next=e;
  e->next=f;
  f->next=g;

  Node* temp = head;

  while(temp != NULL) {
    cout<<temp->val<<endl;
    temp=temp->next;
  }

  temp=head;
  cout<<endl;

  while(temp != NULL) {
    cout<<temp->val<<endl;
    temp=temp->next;
  }



  return 0;
}