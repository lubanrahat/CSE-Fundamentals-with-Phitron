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
  vector<i64> prefix(n);

  prefix[n-1] = arr[n-1];

  for(int i=n-2;i>=0;i--) {
    prefix[i] = prefix[i+1]+arr[i];
  }

  for(i64 i:prefix) {
    cout<<i<<" ";
  }
  cout<<endl;

  return 0;
}