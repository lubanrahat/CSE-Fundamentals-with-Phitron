#include <bits/stdc++.h>
using namespace std;
typedef long long i64;

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  vector<int> v = {1,2,3,-1,2,1,4,5,6,3,4,-1,0,7,-1,8,0,9,8};

  v.insert(v.begin()+4,1000005);

  for(int i:v) cout<<i<<" ";
  cout<<endl;

  return 0;
}