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
    double gpa;
  
    Student(string name,int roll,int cls,double gpa) {
      this->name=name;
      this->roll=roll;
      this->cls=cls;
      this->gpa=gpa;
    }
};

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  Student rahat("Luban Rahat",7,9,4.50);

  cout<<"Name   : "<<rahat.name<<endl;
  cout<<"Roll   : "<<rahat.roll<<endl;
  cout<<"Class  : "<<rahat.cls<<endl;
  cout<<"GPA    : "<<rahat.gpa<<endl;

  return 0;
}