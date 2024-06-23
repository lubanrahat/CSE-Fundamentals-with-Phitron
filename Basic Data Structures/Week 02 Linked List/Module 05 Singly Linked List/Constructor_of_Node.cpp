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

  Node a(10);
  Node b(20);

  a.next=&b;

  cout<<a.val<<endl;
  cout<<a.next->val<<endl;

  return 0;
}