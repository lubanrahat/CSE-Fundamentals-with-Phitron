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
    char section;
  void printInfo(void) {
    cout<<"Name    : "<<this->name<<endl;
    cout<<"Roll    : "<<this->roll<<endl;
    cout<<"Class   : "<<this->cls<<endl;
    cout<<"Section : "<<this->section<<endl;
  }  
};

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int n;
  cin>>n;
  cin.ignore();
  Student arr[n];

  for(int i=0;i<n;i++) {
    cin.ignore();
    getline(cin,arr[i].name);
    cin>>arr[i].roll>>arr[i].cls>>arr[i].section;
  }

  for(int i=0;i<n;i++) {
    arr[i].printInfo();
  }

  return 0;
}