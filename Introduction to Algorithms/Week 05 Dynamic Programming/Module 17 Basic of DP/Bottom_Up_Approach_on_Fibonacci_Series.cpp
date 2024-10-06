#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef unsigned long long u64;
typedef unsigned u32;
#define PI 3.1415926535897932384626
#define rep(i,n) for(int i = 0; i < n; i++)
#define tr(it,a) for(auto it = a.begin(); it != a.end(); it++)

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    int a[n];
    a[0] = 0;
    a[1] = 1;

    for(int i = 2; i <= n; i++) {
        a[i] = a[i-1] + a[i-2];
    } 

    for(int i = 0; i < n; i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}