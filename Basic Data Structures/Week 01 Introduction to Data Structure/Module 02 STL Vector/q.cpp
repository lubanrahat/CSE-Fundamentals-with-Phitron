#include <bits/stdc++.h>
using namespace std;
typedef long long i64;

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  vector<int> v={1,2,3,4,5};
  v.erase(v.begin()+2, v.end());  

  for(int i:v) cout<<i<<" ";

  return 0;
}