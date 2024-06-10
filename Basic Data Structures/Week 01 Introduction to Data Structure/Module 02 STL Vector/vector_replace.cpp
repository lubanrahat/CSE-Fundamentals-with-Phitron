#include <bits/stdc++.h>
using namespace std;
typedef long long i64;

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  vector<int> v = {1,2,3,2,2,4,5,6,7,2,4,8,9};

  replace(v.begin(),v.end(),2,9999);

  for(int i:v) cout<<v[i]<<" ";
  cout<<endl;

  return 0;
}