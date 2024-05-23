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

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int a,b;
  char ch;
  cin>>a>>ch>>b;

  switch (ch) {
  case '>':
    if(a>b) {
      cout<<"Right\n";
    }else {
      cout<<"Wrong\n";
    }
    break;
  case '<':
    if(a<b) {
      cout<<"Right\n";
    }else {
      cout<<"Wrong\n";
    }
    break; 
  case '=':
    if(a==b) {
      cout<<"Right\n";
    }else {
      cout<<"Wrong\n";
    }
    break;  
  
  default:
    break;
  }

  return 0;
}