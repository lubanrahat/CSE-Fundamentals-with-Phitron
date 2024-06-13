#include <bits/stdc++.h>
using namespace std;
typedef long long i64;

bool isSorted(vector<int> arr) {
  int n = arr.size();
    if(n==0 ||n==1) return true;
    for(int i=1;i<n;i++){
      if (arr[i-1]>arr[i]) return false;
    }
  return true;
}

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  int tt;
  cin>>tt;
  while(tt--) {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    if(isSorted(arr)) {
      cout<<"YES\n";
    }else {
      cout<<"NO\n";
    }

  }

  return 0;
}