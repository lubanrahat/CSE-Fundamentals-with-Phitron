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
    int marks;
  void printInfo(void) {
    cout<<"Name    : "<<this->name<<endl;
    cout<<"Roll    : "<<this->roll<<endl;
    cout<<"Class   : "<<this->marks<<endl;
  }  
};

bool cmp(Student a,Student b) {
  return a.marks >= b.marks;
}

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int n;
  cin>>n;
  Student arr[n];

  for(int i=0;i<n;i++) {
    cin>>arr[i].name>>arr[i].roll>>arr[i].marks;
  }
  

  sort(arr,arr+n,cmp);

  for(int i=0;i<n;i++) {
    arr->printInfo();
  }

  return 0;
}
