#include <bits/stdc++.h>
using namespace std;
typedef long long i64;

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin>>n;

  vector<int> arr(n);
  for(int i=0;i<n;i++) cin>>arr[i];
  reverse(arr.begin(),arr.end());
  for(int i:arr) cout<<i<<" ";
  cout<<endl;

  return 0;
}