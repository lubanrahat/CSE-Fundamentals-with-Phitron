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
    char section;
    int math_marks;
    int cls;
  Student(string name,int roll,char section,int math_marks,int cls) {
    this->name=name;
    this->roll=roll;
    this->section=section;
    this->math_marks=math_marks;
    this->cls=cls;
  }  
};

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  Student rahat("Luban Rahat",7,'A',95,10);
  Student rakib("Md Rakib",5,'B',40,10);
  Student sakib("Md Sakib",2,'A',81,10);

  if(rahat.math_marks > rakib.math_marks) {
    if(rahat.math_marks > sakib.math_marks) {
      cout<<"Name: "<<rahat.name<<endl;
      cout<<"Highest math marks: "<<sakib.math_marks<<endl;
    }else {
      cout<<"Name: "<<sakib.name<<endl;
      cout<<"Highest math marks: "<<sakib.math_marks<<endl;
    }
  }else {
    if(rakib.math_marks > sakib.math_marks) {
      cout<<"Name: "<<rakib.name<<endl;
      cout<<"Highest math marks: "<<sakib.math_marks<<endl;
    }else {
      cout<<"Name: "<<sakib.name<<endl;
      cout<<"Highest math marks: "<<sakib.math_marks<<endl;
    }
  }

  return 0;
}