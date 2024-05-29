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

class Student {
  public:
    string name;
    int roll;
    int cls;
    double id;
  Student(string name,int roll,int cls,int id) {
    this->name=name;
    this->roll=roll;
    this->cls=cls;
    this->id=id;
  } 

  void printInfo(void) {
    cout<<"Name  : "<<this->name<<endl;
    cout<<"Roll  : "<<this->roll<<endl;
    cout<<"Class : "<<this->cls<<endl;
    cout<<"Id    : "<<this->id<<endl;
  } 
};

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  Student* rahat = new Student("Luban Rahat",7,12,12.456);
  Student* rakib = new Student("Md Rakib",2,12,134.986);

  // *rakib = *rahat;
  *rakib = *rahat;
  delete rahat;
  rakib->printInfo();
  

  return 0;
}