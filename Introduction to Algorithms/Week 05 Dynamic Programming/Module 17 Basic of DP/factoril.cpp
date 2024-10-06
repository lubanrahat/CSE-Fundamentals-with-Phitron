#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef unsigned long long u64;
typedef unsigned u32;
#define PI 3.1415926535897932384626
#define rep(i,n) for(int i = 0; i < n; i++)
#define tr(it,a) for(auto it = a.begin(); it != a.end(); it++)

int fact(int n) {
    if(n == 0) {
        return 1;
    }
    return fact(n-1) * n;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    cout<<fact(n)<<endl;

    return 0;
}