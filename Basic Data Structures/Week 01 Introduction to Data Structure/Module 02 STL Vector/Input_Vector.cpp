#include <bits/stdc++.h>
using namespace std;
typedef long long i64;

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin>>n;
  // vector<int> v;

  // for(int i=0;i<n;i++) {
  //   int x;
  //   cin>>x;
  //   v.push_back(x);
  // }

  // for(int i=0;i<v.size();i++) {
  //   cout<<v[i]<<" ";
  // } 

  vector<int> v(n);
  for(int i=0;i<n;i++) cin>>v[i];

  for(int i=0;i<v.size();i++) {
    cout<<v[i]<<" ";
  } 
  cout<<endl;

  return 0;
}