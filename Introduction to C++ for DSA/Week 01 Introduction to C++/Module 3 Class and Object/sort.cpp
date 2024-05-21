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

  int arr[] = {2,6,3,5,4,1,9,4,5,44,11,22,54,78,23,90,21,545,23,12};
  int n = sizeof(arr)/sizeof(int);
  sort(arr,arr+n);
  for(int i=0;i<n;i++) {
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  sort(arr,arr+n,greater<int>());
  for(int i=0;i<n;i++) {
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  return 0;
}