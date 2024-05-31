#include <iostream>
#include<algorithm>
#include<vector>
#include <cmath>
#include<climits>
#include<map>
#include <set>
#include <string>
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
    string s;
    cin>>s;

    int j = 0,sum1 = 0,sum2 = 0;
    for(int i=0;i<3;i++) {
      sum1+=int(s[i])-48;
      j++;
    }

    for(int i=j;i<s.size();i++) {
      sum2+=int(s[i])-48;
    }

    if(sum1 == sum2) {
      cout<<"YES\n";
    }else {
      cout<<"NO\n";
    }
  }

  return 0;
}