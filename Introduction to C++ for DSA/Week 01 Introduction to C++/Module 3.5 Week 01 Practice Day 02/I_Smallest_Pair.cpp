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

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int tt;
  cin>>tt;

  while(tt--) {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int smallest_Pair = INT_MAX;
    for(int i=0;i<n;i++) {
      for(int j=i+1;j<n;j++) {
        smallest_Pair = min(smallest_Pair,(arr[i]+arr[j]+j-i));
      }
    }
    cout<<smallest_Pair<<endl;
  }
  return 0;
}