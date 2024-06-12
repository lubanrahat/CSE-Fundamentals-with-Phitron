#include <bits/stdc++.h>
using namespace std;
typedef long long i64;

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  int n,tt;
  cin>>n>>tt;
  vector<int> arr(n);
  for(int i=0;i<n;i++) cin>>arr[i];
  while(tt--) {
    int a,b,sum=0;
    cin>>a>>b;
    a-=1;
    b-=1;
    for(int i=a;i<=b;i++) {
      sum+=arr[i];
    }
    cout<<sum<<endl;
  }

  return 0;
}