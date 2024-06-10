#include <bits/stdc++.h>
using namespace std;
typedef long long i64;

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  vector<int> v;
  v.push_back(100);
  v.push_back(45);
  v.push_back(678);
  v.push_back(23);
  v.push_back(567);
  v.push_back(10000);

  // cout<<v.back()<<endl;
  // cout<<v.front()<<endl;

  // vector<int>::iterator it;

  // for(it = v.begin(); it < v.end();it++) {
  //   cout<<*it<<" ";
  // }

  for(auto it = v.begin();it<v.end();it++) {
    cout<<*it<<" ";
  }
  cout<<endl;

  return 0;
}