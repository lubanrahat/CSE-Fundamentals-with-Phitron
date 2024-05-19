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

  int n = 10;
  // if(n==10) {
  //   cout<<"YES"<<endl;
  // }
  // else {
  //   cout<<"NO"<<endl;
  // }

  bool evenOdd = (n%2==0)? true:false;
  cout<<evenOdd<<endl;

  return 0;
}