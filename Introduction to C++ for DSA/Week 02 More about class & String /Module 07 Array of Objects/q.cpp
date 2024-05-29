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

class Student
{
      public:
	    int roll;
      Student(int r)
      {	
	      roll = r;
      }
};

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  // Student a[5];
  Student* a[5];
  for(int i=0;i<5;i++) {
    cin>>a[i]->roll;
  }
  // new Student a[5];

  for(int i=0;i<5;i++) {
    cout<<a[i]->roll<<endl;
  }


  return 0;
}