#include <bits/stdc++.h>
using namespace std;
typedef long long i64;

bool isDuplicate(vector<int>arr) {
  for(int i=0;i<arr.size();i++) {
    for(int j=i+1;j<arr.size();j++) {
      if(arr[i]==arr[j]) return true;
    }
  }
  return false;
}

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++) cin>>arr[i];

  if(isDuplicate(arr)) cout<<"YES\n";
  else cout<<"NO\n";

  return 0;
}