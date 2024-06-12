#include <bits/stdc++.h>
using namespace std;
typedef long long i64;

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin>>n;

  vector<int> a(n),b(n),c(n+n);

  for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<n;i++) cin>>b[i];

  c = b;

  c.insert(c.begin()+n,a.begin(),a.end());

  for(auto it = c.begin(); it < c.end(); it++) {
    cout<<*it<<" ";
  }
  cout<<endl;

  return 0;
}