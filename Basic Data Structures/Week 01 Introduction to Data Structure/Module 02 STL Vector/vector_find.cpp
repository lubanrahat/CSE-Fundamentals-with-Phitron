#include <bits/stdc++.h>
using namespace std;
typedef long long i64;

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  vector<int> v = {1,2,3,4,5,6,7,8,10};
  vector<int>::iterator it;
  it = find(v.begin(),v.end(),1);

  if(it != v.end()) cout<<"YES\n";
  else cout<<"NO\n";

  return 0;
}