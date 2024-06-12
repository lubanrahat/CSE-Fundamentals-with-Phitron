#include <bits/stdc++.h>
using namespace std;
typedef long long i64;

bool binary_search(vector<int> arr,int n,int target) {
  int left =0,right =n-1;
  while(left<=right) {
    int mid = left+(right-left)/2;
    if(arr[mid]==target) return true;
    else if(arr[mid]<target) left=mid+1;
    else right=mid-1;
  }
  return false;
}

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  int n,tt;
  cin>>n>>tt;
  vector<int> arr(n);
  for(int i=0;i<n;i++) cin>>arr[i];
  while(tt--) {
    int target;
    cin>>target;

    if(binary_search(arr,n,target)) cout<<"found\n";
    else cout<<"not found\n";
  }

  return 0;
}