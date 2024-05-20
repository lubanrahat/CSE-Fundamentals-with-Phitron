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

int *fun() {
  int *a = new int[5];
  for(int i=0;i<5;i++) {
    cin>>a[i];
  }
  return a;
}

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  // int n;
  // cin>>n;
  // int *arr = new int[n];
  // for(int i=0;i<n;i++) {
  //   cin>>arr[i];
  // }
  // for(int i=0;i<n;i++) {
  //   cout<<arr[i]<<"\n";
  // }

  // delete[] arr;

  int *a = fun();
  for(int i=0;i<5;i++) {
    cout<<a[i]<<" ";
  }
  cout<<endl;

  return 0;
}