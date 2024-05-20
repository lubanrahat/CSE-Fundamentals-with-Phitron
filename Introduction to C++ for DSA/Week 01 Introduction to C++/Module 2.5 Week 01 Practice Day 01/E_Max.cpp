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
  int *arr = new int[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  int maxValue = INT_MIN;
  for(int i=0;i<n;i++) {
    if(arr[i]>maxValue) {
      maxValue = arr[i];
    }
  }  
  cout<<maxValue<<endl;

  return 0;
}