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

bool solve(int *arr, int n, int s) {
  for (int i=0;i<n-2;++i) {
    for (int j=i+1;j<n-1;j++) {
      for (int k=j+1;k<n;k++) {
        if (arr[i] + arr[j] + arr[k] == s) {
          return true;
        }
      }
    }
  }
    return false;
}

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int tt;
  cin>>tt;
  while(tt--) {
    int n,target,sum = 0;
    cin>>n>>target;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    
    if(solve(arr,n,target)) {
      cout<<"YES\n";
    }else {
      cout<<"NO\n";
    }
  }

  return 0;
}