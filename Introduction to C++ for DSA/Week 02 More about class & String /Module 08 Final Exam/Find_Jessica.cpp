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

  string s,word;
  getline(cin,s);
  stringstream ss(s);

  bool flag = false;

  while(ss>>word) {
    if(word == "Jessica") {
      flag = true;
    }
  }

  if(flag) {
    cout<<"YES\n";
  }else {
    cout<<"NO\n";
  }

  return 0;
}