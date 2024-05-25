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
#include <cstring>
using namespace std;
#define ll long long

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  char s[1000001];
  while(cin.getline(s,1000001)) {
    char temp[1000001];
    int j = 0;
    for(int i=0;s[i]!='\0';i++) {
      if(s[i]!=' ') {
        temp[j++] = s[i];
      }
    }
    temp[j] = '\0';
    sort(temp,temp+strlen(temp));
    cout<<temp<<endl;
  }

  return 0;
}