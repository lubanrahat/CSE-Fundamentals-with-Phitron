#include <bits/stdc++.h>
using namespace std;
typedef long long i64;

bool binary_search(int *arr,int n,int target) {
  int left=0,right=n-1;
  while(left<=right) {
    int mid = (left+right)/2;
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

  int n,q;
  cin>>n>>q;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
  sort(arr,arr+n);
  while(q--) {
    int target;
    cin>>target;
    if(binary_search(arr,n,target)) cout<<"found"<<endl;
    else cout<<"not found"<<endl;
  }

  return 0;
}