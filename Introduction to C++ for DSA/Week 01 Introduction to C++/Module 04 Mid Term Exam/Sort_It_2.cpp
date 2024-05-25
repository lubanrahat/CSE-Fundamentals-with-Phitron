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

int* sort_it(int n) {
  int *arr = new int[n];
  for(int i=0;i<n;i++) cin>>arr[i];
  sort(arr,arr+n,greater<int>());
  return arr;
}

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int n;
  cin>>n;
  int *arr = sort_it(n);
  for(int i=0;i<n;i++) cout<<arr[i]<<" ";
  cout<<endl;

  return 0;
}