#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef unsigned long long u64;
typedef unsigned u32;
#define PI 3.1415926535897932384626
#define rep(i,n) for(int i = 0; i < n; i++)
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v = {50,40,45,30,35,42,32,25,20,10};
    int x;
    cin>>x;
    v.push_back(x);
    int currIndex = v.size();
    int parentIndex = (currIndex-1) / 2;
    while(currIndex != 0) {
        if(v[parentIndex] < v[currIndex]) {
            swap(v[parentIndex],v[currIndex]);
        } else {
            break;
        }
        currIndex = parentIndex;
    }

    return 0;
}