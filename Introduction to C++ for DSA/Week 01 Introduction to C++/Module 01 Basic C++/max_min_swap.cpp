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

  int a,b;
  cin>>a>>b;
  cout<<"Max value: "<<max(a,b)<<" Min value: "<<min(a,b)<<endl;
  cout<<"Swapping after: "<<"a = "<<a<<" b = "<<b<<endl;
  swap(a,b);
  cout<<"Swapping befor: "<<"a = "<<a<<" b = "<<b<<endl;

  return 0;
}