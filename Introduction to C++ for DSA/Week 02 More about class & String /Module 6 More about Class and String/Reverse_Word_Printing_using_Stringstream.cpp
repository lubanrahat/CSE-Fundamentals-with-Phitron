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

void print(stringstream& ss) {
  string word;
  if(ss>>word) {
    print(ss);
    cout<<word<<endl;
  }
}

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  string s;
  getline(cin,s);
  stringstream ss(s);
  print(ss);
  return 0;
}