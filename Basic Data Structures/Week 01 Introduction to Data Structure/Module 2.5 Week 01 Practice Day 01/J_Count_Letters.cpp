#include <bits/stdc++.h>
using namespace std;
typedef long long i64;

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  char c;
  vector<int> count(26,0);

  while(cin>>c) {
    int val = c-97;
    count[val]++;
  }

  for(int i=0;i<26;i++) {
    if(count[i] > 0) {
      cout<<char(i+'a')<<" : "<<count[i]<<endl;
    }
  }

  return 0;
}