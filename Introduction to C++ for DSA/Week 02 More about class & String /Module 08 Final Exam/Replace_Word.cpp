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

  int tt;
  cin>>tt;

  while(tt--) {
    string s,target;
    cin>>s>>target;
    while(s.find(target)!=-1) {
      int finds = s.find(target);
      s.replace(finds,target.size(),"#");
    }
    cout<<s<<endl;
  }
  
  return 0;
}