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
  stringstream ss;
  ss << s;
  string w;
  while(ss>>w) {
    cout<<w<<endl;
  }

  return 0;
}