#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
#define rep(i,n) for(int i=0;i<n;i++)

void fun(int* &ptr) {
  ptr=NULL;
  cout<<&ptr<<endl;
}

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  int data = 10;
  int *ptr = &data;
  fun(ptr);
  cout<<&ptr<<endl;
  cout<<ptr<<endl;

  return 0;
}