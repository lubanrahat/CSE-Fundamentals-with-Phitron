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

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int n;
  cin>>n;

  switch (n)
  {
  case 1:
    cout<<"One!\n";
    break;
  case 0:
    cout<<"Two!\n";
    break; 
  case 3:
    cout<<"Three!\n";
    break;   
  
  default:
    cout<<n<<" upper 3!"<<endl;
    break;
  }

  return 0;
}