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

  char ch;
  cin>>ch;

  if(ch>='A' && ch<='Z') {
    cout<<"ALPHA\n";
    cout<<"IS CAPITAL\n";
  }else if(ch>='0' && ch<='9') {
    cout<<"IS DIGIT\n";
  }else {
    cout<<"ALPHA\n";
    cout<<"IS SMALL\n";
  }

  return 0;
}