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
  getline(cin,s);
  bool inside_word = false;
  int count = 0;
  for(char c:s) {
    if(isalpha(c)) {
      if(inside_word == false) {
        count++;
      }
      inside_word = true;
    }else {
      inside_word = false;
    }
  }
  cout<<count<<endl;

  return 0;
}