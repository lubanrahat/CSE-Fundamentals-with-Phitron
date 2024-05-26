#include <iostream>
#include<algorithm>
#include<vector>
#include <cmath>
#include<climits>
#include<map>
#include <set>
#include<utility>
#include <sstream>
#include <iomanip>
using namespace std;
#define ll long long

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  // string s = "Hello world";
  // cout<<"Size : "<<s.size()<<endl;
  // cout<<"Max_Size: "<<s.max_size()<<endl;
  // cout<<"Capa city: "<<s.capacity()<<endl;
  // s.clear();
  // s="hello";
  // s.clear();
  // if(s.empty()) {
  //   cout<<"YES! empty\n";
  // }else {
  //   cout<<"NO!\n";
  // }

  string s;
  cin>>s;
  // s.resize(5);
  s.resize(20,'R');
  cout<<s<<endl;

  return 0;
}