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

  for(int i=0;i<n;i++) {
    if(arr[i]>0) arr[i]=1;
    if(arr[i]<0) arr[i]=2;
  }

  for(int i:arr) cout<<i<<" ";

  return 0;
}