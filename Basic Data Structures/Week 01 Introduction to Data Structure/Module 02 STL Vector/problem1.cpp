#include <bits/stdc++.h>
using namespace std;
typedef long long i64;

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++) cin>>v[i];
  for(int i:v) cout<<i<<" ";
  cout<<endl;

  return 0;
}