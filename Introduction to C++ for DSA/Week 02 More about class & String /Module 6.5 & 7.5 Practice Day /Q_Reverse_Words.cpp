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

  string s,word;
  getline(cin,s);
  stringstream ss(s);

  while(ss >> word) {
    reverse(word.begin(),word.end());
    int i = 1;

    cout<<word;
    if(word.size() == 1) 
      cout<<" ";
    else if(i < word.size()) 
      cout<<" ";
  }


  return 0;
}