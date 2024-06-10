#include <bits/stdc++.h>
using namespace std;
typedef long long i64;

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  vector<int> v = {1,2,1,3,5,3,1,0,2,5,0,-1,6,7,0};
  int n = v.size();
  
  v.erase(v.begin(),v.begin()+5);

  for(int i:v) cout<<i<<" ";
  cout<<endl;

  return 0;
}