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
    int cls;
    char section;
    int id;
};

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int n;
  cin>>n;

  Student st[n];
  for(int i=0;i<n;i++) {
    cin>>st[i].name>>st[i].cls>>st[i].section>>st[i].id;
  }

  int strat = 0,end = n-1;
  while(strat<=end) {
    swap(st[strat].section,st[end].section);
    strat++;
    end--;
  }

  for(int i=0;i<n;i++) {
    cout<<st[i].name<<" "<<st[i].cls<<" "<<st[i].section<<" "<<st[i].id<<endl;
  }

  return 0;
}