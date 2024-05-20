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

int *fun() {
  int *a = new int;
  *a=100;
  return a;
}

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int *n = new int;
  *n=10;

  int *p = fun();
  cout<<p<<endl;

  return 0;
}