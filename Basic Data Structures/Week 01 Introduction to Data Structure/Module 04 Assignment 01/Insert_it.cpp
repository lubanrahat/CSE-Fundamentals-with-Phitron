#include <bits/stdc++.h>
using namespace std;
typedef long long i64;

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin>>n;
  vector<int> a(n);
  for(int i=0;i<n;i++) cin>>a[i];
  int m;
  cin>>m;
  vector<int> b(m);
  for(int i=0;i<m;i++) cin>>b[i];
  int x;
  cin>>x;

  a.insert(a.begin()+x,b.begin(),b.end());

  for(int i:a) {
    cout<<i<<" ";
  }

  return 0;
}