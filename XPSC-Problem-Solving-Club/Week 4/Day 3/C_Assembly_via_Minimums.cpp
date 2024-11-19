#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(),(x).end()

int main() {

  ios::sync_with_stdio(false),cin.tie(nullptr);

  int t;
  cin>>t;
  while(t--) {
    int n;cin>>n;
    ll k=n*(n-1)/2;
    vector<int> nums(k);
    for(int i=0;i<k;i++) {
      cin>>nums[i];
    }
    sort(all(nums));
    for(int i=0;i<k;i+=--n){
        cout<<nums[i]<<" ";
    }
    cout<<nums[k-1]<<endl;
  }
  
  return 0;
}