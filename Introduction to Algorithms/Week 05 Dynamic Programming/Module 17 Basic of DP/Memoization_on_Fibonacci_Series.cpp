#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef unsigned long long u64;
typedef unsigned u32;
#define PI 3.1415926535897932384626
#define rep(i,n) for(int i = 0; i < n; i++)
#define tr(it,a) for(auto it = a.begin(); it != a.end(); it++)

const i64 N = 1e6+5;

i64 dp[N];

i64 fib(int n) {
    if(n == 0 || n == 1) return n;
    if(dp[n] != -1) return dp[n];
    i64 ans = fib(n-1) + fib(n-2);
    dp[n] = ans;
    return ans;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    i64 n;
    cin>>n;

    memset(dp,-1,sizeof(dp));

    cout<<fib(n)<<endl;

    return 0;
}