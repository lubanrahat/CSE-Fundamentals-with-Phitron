#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
#define rep(i,n) for(int i=0;i<n;i++)

class Node {
  public:
    int val;
    Node* next;
};

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  Node a,b;
  a.val = 10;
  b.val = 20;

  a.next = &b;
  b.next = NULL;

  cout<<a.val<<endl;
  // cout<<b.val<<endl;
  // cout<<(*a.next).val<<endl;
  cout<<a.next->val<<endl;;

  return 0;
}