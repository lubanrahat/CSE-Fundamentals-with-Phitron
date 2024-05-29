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

class Parson {
  public:
    string name;
    int age;
  Parson(string name,int age) {
    this->name=name;
    this->age=age;
  } 

  void printInfo(void) {
    cout<<"Print info Parson: "<<endl;
    cout<<"Name : "<<this->name<<endl;
    cout<<"Age  : "<<this->age<<endl;
  } 
};

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  Parson* rahat= new Parson("Luban Rahat",20);
  Parson* rakib= new Parson("Md Rakib",20);
  
  rakib->name = rahat->name;
  rakib->age = rahat->age;
  delete rahat;

  rakib->printInfo();

  return 0;
}