#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(),(x).end()

int solve(){
  long long n,c;
  cin>>n>>c;
  vector<long long> v(n);
  long long sum = 0;
  for(long long i=0;i<n;i++){
    cin>>v[i];
    v[i]=v[i]+i+1;
  }
  sort(all(v));
  for(int i=0;i<n;i++){
    sum+=v[i];
    if(sum>c){
      cout<<i<<endl;
      return 0;
    }
  }
  cout<<n<<endl;
  return 0;
}
int main()
{
  ios::sync_with_stdio(false),cin.tie(nullptr);
  int t=1;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}