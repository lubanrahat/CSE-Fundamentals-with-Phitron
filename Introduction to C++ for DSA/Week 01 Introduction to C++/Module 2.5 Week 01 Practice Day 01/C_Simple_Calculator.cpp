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

  long long a,b,summation,multiplication,subtraction;
  cin>>a>>b;

  summation=a+b;
  multiplication=a*b;
  subtraction=a-b;

  cout<<a<<" + "<<b<<" = "<<summation<<endl;
  cout<<a<<" * "<<b<<" = "<<multiplication<<endl;
  cout<<a<<" - "<<b<<" = "<<subtraction<<endl;

  return 0;
}