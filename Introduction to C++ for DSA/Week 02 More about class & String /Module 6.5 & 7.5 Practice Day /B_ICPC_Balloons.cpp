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
    int n;
    cin>>n;
    char s[n+10];
    cin>>s;

    int fq[26] = {0};
    for(int i=0;i<n;i++) {
      char lower = tolower(s[i]);
      fq[lower-97]++;
    }

    
      
  }

  return 0;
}