#include <bits/stdc++.h>
using namespace std;
typedef long long i64;

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  vector<int> v = {1,2,3,4,5};
  vector<int> v1;
  v1 = v;

  v1.push_back(1000);
  v1.pop_back();
  v1.pop_back();

  for(int i=0;i<v1.size();i++) {
    cout<<v1[i]<<" ";
  }
  cout<<endl;

  return 0;
}