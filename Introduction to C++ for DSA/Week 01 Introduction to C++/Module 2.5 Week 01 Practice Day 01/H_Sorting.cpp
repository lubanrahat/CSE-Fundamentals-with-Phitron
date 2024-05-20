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

  int n;
  cin>>n;
  int *arr = new int[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  for(int i=0;i<n-1;i++) {
    bool swapped = false;
    for(int j=0;j<n-i-1;j++) {
      if(arr[j]>arr[j+1]) {
        swap(arr[j],arr[j+1]);
        swapped = true;
      }
    }
    if(swapped == false) break;
  }  
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
  cout<<endl;  

  return 0;
}