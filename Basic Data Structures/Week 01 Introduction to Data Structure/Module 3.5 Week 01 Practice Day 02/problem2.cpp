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

  int totalSum=0;
  for(int i=0;i<n;i++) totalSum+=arr[i];

  int leftSum=0;
  for(int i=0;i<n;i++) {
    totalSum-=arr[i];
    if(leftSum == totalSum) {
      cout<<i<<endl;
      return 0;
    }
    leftSum+=arr[i];
  }

  return 0;
}