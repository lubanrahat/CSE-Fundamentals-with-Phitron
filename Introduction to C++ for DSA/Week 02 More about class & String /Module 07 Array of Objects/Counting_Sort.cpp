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

  string s;
  cin>>s;
  int frq[26] = {0};
  for(char ch:s) {
    frq[ch='a']++;
  }
  for(char i='a';i<='z';i++) {
    for(int j=0;j<frq[i-'a'];j++) {
      cout<<i;
    }
  }

  return 0;
}