#include <bits/stdc++.h>
using namespace std;
typedef long long i64;

vector<int> prefixSum(vector<int> arr) {
  int n = arr.size();
  vector<int> prefix(n);
  prefix[0]=arr[0];
  for(int i=1;i<n;i++) {
    prefix[i]=prefix[i-1]+arr[i];
  }
  return prefix;
}

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++) cin>>arr[i];
  
  vector<int> sum = prefixSum(arr);

  for(int i:sum) {
    cout<<i<<" ";
  }
  cout<<endl;

  return 0;
}