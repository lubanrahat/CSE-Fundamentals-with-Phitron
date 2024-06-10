#include <bits/stdc++.h>
using namespace std;
typedef long long i64;

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  vector<int>v={1,2,3,4,5,6,7,8,9,10};
  cout<<"Size : "<<v.size()<<endl;
  cout<<"Capacity : "<<v.capacity()<<endl;
  cout<<"Mixmum size : "<<v.max_size()<<endl;

  v.resize(20);
  cout<<"Capacity : "<<v.capacity()<<endl;

  v.clear();
  cout<<"Capacity : "<<v.capacity()<<endl;

  if(v.empty()) {
    cout<<"YES\n";
  }else cout<<"NO\n";
  
  v.resize(10);

  cout<<"Size : "<<v.size()<<endl;
  cout<<"Capacity : "<<v.capacity()<<endl;
  cout<<"Mixmum size : "<<v.max_size()<<endl;

  

  return 0;
}