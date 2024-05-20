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

  int a,b,c;
  cin>>a>>b>>c;
  int minimum,maximum;
  minimum = min(a,min(b,c));
  maximum = max(a,max(b,c));
  cout<<minimum<<" "<<maximum<<endl;

  return 0;
}