#include <bits/stdc++.h>
using namespace std;
typedef long long i64;

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin>>n;
  cin.ignore();
  vector<string> v(n);

  for(int i=0;i<n;i++) {
    getline(cin,v[i]);
  }

  for(string i:v) cout<<i<<endl;

  return 0;
}