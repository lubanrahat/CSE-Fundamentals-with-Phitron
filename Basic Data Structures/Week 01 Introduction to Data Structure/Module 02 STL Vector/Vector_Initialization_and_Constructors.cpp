#include <bits/stdc++.h>
using namespace std;
typedef long long i64;

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  // vector<int> v; type 1
  // vector<int> v(5); type 2
  // vector<int> v(5,100);
  // vector<int> v2(10,100);
  int arr[] = {1,2,3,4,5,6,7,8,9,110};
  vector<int> v(arr,arr+10);

  for(int i=0;i<v.size();i++) {
    cout<<v[i]<<" ";
  }cout<<endl;

  cout<<"Size: "<<v.size()<<endl;

  return 0;
}