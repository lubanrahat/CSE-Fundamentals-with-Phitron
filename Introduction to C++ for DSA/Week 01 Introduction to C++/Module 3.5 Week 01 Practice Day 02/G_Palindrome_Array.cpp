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

bool isPalindrome(int *arr,int n) {
  int left = 0,right = n-1;
  while(left<=right) {
    if(arr[left]!=arr[right]) {
      return false;
      break;
    }else {
      left++;
      right--;
    }
  }
  return true;
}

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];

  if(isPalindrome(arr,n)) {
    cout<<"YES\n";
  }else {
    cout<<"NO\n";
  }

  return 0;
}