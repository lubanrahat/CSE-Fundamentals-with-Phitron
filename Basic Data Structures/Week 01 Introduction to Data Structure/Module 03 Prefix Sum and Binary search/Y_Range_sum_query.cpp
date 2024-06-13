#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  i64 n,tt;
  cin>>n>>tt;
  vector<int> arr(n);
  for(int i=0;i<n;i++) cin>>arr[i];
  int pre[n];
  pre[0]=arr[0];
  for(int i=1;i<n;i++) pre[i]=arr[i]+pre[i-1];
  while(tt--) {
    i64 L,R;
    i64 sum;
    cin>>L>>R;
    L--;
    R--;
    if(L == 0) sum = pre[R];
    else sum = pre[R]-pre[L-1];
    cout<<sum<<endl;
  }

  return 0;
}