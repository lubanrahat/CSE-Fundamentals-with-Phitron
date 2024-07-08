#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <array>
#include <set>
#include <map>
#include <utility>
using namespace std;
typedef long long i64;
typedef unsigned long ul;
#define PI 3.1415926535897932384626
#define rep(i,n) for(int i = 0;i < n;i++)
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)

int binary_search(vector<int> arr,int target) {
    int left = 0,right = arr.size()-1;
    while(left <= right) {
        int mid = left+(right-left)/2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] < target) left = mid+1;
        else right = mid-1;
    }
    return -1;
}

int main() {
    
    int n;
    cin>>n;
    rep(i,n) {
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr,arr+n);
        cout<<"Case "<<i+1<<": ";
        for(int i=0;i<n;i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
    
    return 0;
}