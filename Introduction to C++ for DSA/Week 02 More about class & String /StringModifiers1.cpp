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

  // string a,b;
  // a = "hello";
  // b = "world";
  // a+=b;
  // cout<<a<<endl;

  string a = "Hello World!";
  a.push_back('R');
  a.push_back('A');

  a.pop_back();

  cout<<a<<endl;


  return 0;
}