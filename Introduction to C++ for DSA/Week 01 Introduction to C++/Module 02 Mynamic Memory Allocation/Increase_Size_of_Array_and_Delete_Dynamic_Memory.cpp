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

  int *arr = new int[5];
  for(int i=0;i<5;i++)
    cin>>arr[i];
  for(int i=0;i<5;i++)
    cout<<arr[i]<<endl;
  delete[] arr;
  for(int i=0;i<5;i++)
    cout<<arr[i]<<endl;    

  return 0;
}