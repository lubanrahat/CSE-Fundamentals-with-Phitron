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

  int a,b,res;
  char ch1,ch2;
  cin>>a>>ch1>>b>>ch2>>res;

  switch (ch1) {
  case '+':
    if(a+b==res) {
      cout<<"Yes\n";
    }else {
      cout<<a+b<<endl;
    }
    break;
  case '-':
    if(a-b==res) {
      cout<<"Yes\n";
    }else {
      cout<<a-b<<endl;
    }
    break;
  case '*':
    if(a*b==res) {
      cout<<"Yes\n";
    }else {
      cout<<a*b<<endl;
    }
    break;
  default:
    break;
  }

  return 0;
}