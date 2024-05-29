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

class Freq {
  public:
    char value;
    int count;
};

bool cmp(Freq a,Freq b) {
  if(a.count > b.count) {
    return true;
  }
  return false;
}

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  string s;
  cin>>s;

  Freq f[26];
  for(int i=0;i<26;i++) {
    f[i].value = char(i+'a');
    f[i].count = 0;
  }

  for(char c:s) {
    int ascii = int(c-'a');
    f[ascii].count++;
  }

  sort(f,f+26,cmp);

  for(int i=0;i<26;i++) {
    if(f[i].count > 0) {
      for(int j=0;j<f[i].count;j++) {
        cout<<f[i].value;
      }
    }
  }

  return 0;
}