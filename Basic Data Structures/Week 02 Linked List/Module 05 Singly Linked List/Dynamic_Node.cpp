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

  head->next = a;

  cout<<head->val<<endl;
  cout<<head->next->val<<endl;

  return 0;
}