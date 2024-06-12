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

  int count = 0;

  for(int i=0;i<n;i++) {
    auto it = find(arr.begin(),arr.end(),arr[i]+1);
    if(it!=arr.end()) count++;
  }

  cout<<count<<endl;

  return 0;
}