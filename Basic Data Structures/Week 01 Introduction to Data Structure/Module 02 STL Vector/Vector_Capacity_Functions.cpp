#include <bits/stdc++.h>
using namespace std;
typedef long long i64;

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  vector<int> v;
  // cout<<v.max_size()<<endl;
  // cout<<v.capacity()<<endl;
  // v.push_back(10);
  // cout<<v.capacity()<<endl;
  // v.push_back(30);
  // cout<<v.capacity()<<endl;
  // v.push_back(40);
  // cout<<v.capacity()<<endl;
  v.push_back(10);
  v.push_back(13);
  v.push_back(15);
  v.push_back(18);
  v.push_back(199);
  v.push_back(107);
  v.push_back(104);
  v.push_back(101);

  // v.clear();

  v.resize(2);

  for(int i=0;i<v.size();i++) {
    cout<<v[i]<<" ";
  }
  cout<<endl;

  // cout<<v[2]<<endl;
  // v.clear();
  // if(v.empty()) cout<<"Yes\n";
  // else cout<<"NO\n";

  return 0;
}