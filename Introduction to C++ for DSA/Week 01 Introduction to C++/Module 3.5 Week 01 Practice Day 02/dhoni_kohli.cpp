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

class Dhoni {
  public:
    int jersey_no;
    string country;
};

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  Dhoni* kohli = new Dhoni;
  Dhoni* dhoni = new Dhoni;
  dhoni->jersey_no = 75;
  dhoni->country = "India";

  
  kohli->jersey_no=dhoni->jersey_no;
  kohli->country=dhoni->country;

  delete dhoni;

  cout<<kohli->jersey_no<<" -> "<<kohli->country<<endl;

  

  

  return 0;
}