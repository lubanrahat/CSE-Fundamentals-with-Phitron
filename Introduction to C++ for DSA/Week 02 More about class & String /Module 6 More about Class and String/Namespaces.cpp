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

namespace rahat {
  int age = 20;
  void print() {
    cout<<"Hello world!"<<endl;
  }

  class Student {
    public:
    string name;
    int age;
  };
}


int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  cout<<rahat::age<<endl;
  rahat::print();

  rahat::Student rakib;
  rakib.name = "Md Rakib";

  return 0;
}