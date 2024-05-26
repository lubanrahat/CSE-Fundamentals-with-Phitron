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

  string s = "Hello world!";
  // cout<<*s.begin()<<endl;
  // cout<<*(s.end()-1)<<endl;
  string::iterator it;
  for(string::iterator it=s.begin();it<s.end();it++) {
    cout<<*it<<endl;
  }

  return 0;
}