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
    int unique_ID;
    char name[1001];
    char section;
    int total_marks;
};

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  
  int tt;
  cin>>tt;
  while(tt--) {
    Student a,b,c;
    
    cin>>a.unique_ID>>a.name>>a.section>>a.total_marks;
    cin>>b.unique_ID>>b.name>>b.section>>b.total_marks;
    cin>>c.unique_ID>>c.name>>c.section>>c.total_marks;

    if(a.total_marks >= b.total_marks && a.total_marks >= c.total_marks) {
      cout<<a.unique_ID<<" "<<a.name<<" "<<a.section<<" "<<a.total_marks<<endl;
    }else if(b.total_marks >= a.total_marks && b.total_marks >= c.total_marks) {
      cout<<b.unique_ID<<" "<<b.name<<" "<<b.section<<" "<<b.total_marks<<endl;
    }else if(c.total_marks >= a.total_marks && c.total_marks >= b.total_marks) {
      cout<<c.unique_ID<<" "<<c.name<<" "<<c.section<<" "<<c.total_marks<<endl;
    }
    
  }
  return 0;
}