#include <bits/stdc++.h>
using namespace std;
typedef long long i64;

int binary_search(int *arr,int n,int target) {
  int left=0,right=n-1;
  while(left<=right) {
    int mid=left+(right-left)/2;
    if(arr[mid]==target) return mid;
    if(arr[mid]<target) left=mid+1;
    else right=mid-1;
  }
  return -1;
}

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
  int target;
  cin>>target;

  int answer = binary_search(arr,n,target);

  if(answer!=-1) {
    cout<<target<<" is found "<<answer<<" index!\n";
  }else {
    cout<<target<<" is not found!\n";
  }

  return 0;
}