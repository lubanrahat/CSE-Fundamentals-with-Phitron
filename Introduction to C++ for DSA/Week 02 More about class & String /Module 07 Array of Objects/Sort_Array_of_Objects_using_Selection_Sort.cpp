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

  for(int i=0;i<n;i++) {
    for(int j=i+1;j<n;j++) {
      if(arr[i].marks<arr[j].marks) {
        swap(arr[i],arr[j]);
      }
      if(arr[i].marks==arr[j].marks) {
        if(arr[i].roll > arr[j].roll) {
          swap(arr[i],arr[j]);
        }
      }
    }
  }
  for(int i=0;i<n;i++) {
    arr[i].printInfo();
  }

  return 0;
}



