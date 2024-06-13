#include <bits/stdc++.h>
using namespace std;
typedef long long i64;

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin>>n;
 
  char arr[n][n];
  for(int i=0;i<n;i++) {
    for(int j=0;j<n;j++) {
      arr[i][j]=' ';
    }
  }
 
  for(int i=0;i<n;i++) {
    for(int j=0;j<n;j++) {
      if(i==j) {
        arr[i][j]='\\';
      }
      if(i+j==n-1) {
        arr[i][j]='/';
      }
    }
  }
 
  int x = n/2;
  arr[x][x]='X';
 
  for(int i=0;i<n;i++) {
    for(int j=0;j<n;j++) {
      cout<<arr[i][j];
    }
    cout<<endl;
  }

  return 0;
}