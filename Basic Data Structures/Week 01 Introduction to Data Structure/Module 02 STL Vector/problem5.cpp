#include <bits/stdc++.h>
using namespace std;
typedef long long i64;

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  vector<int> v = {1 ,2 ,3 ,2,4,2 ,5 ,2 ,6,2};
  
  while(find(v.begin(),v.end(),2)!=v.end()) {
    replace(v.begin(),v.end(),2,99);
  }

  for(int i=0;i<v.size();i++) {
    cout<<v[i]<<" ";
  }
  cout<<endl;
  


  return 0;
}