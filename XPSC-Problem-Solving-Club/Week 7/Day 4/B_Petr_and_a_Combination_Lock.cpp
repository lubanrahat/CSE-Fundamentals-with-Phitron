#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 3e5 + 9;

void solve() {
    int n; cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int mask=0;mask<(1<<1);mask++) {
        int sum=0;
        for(int i=0;i<n;i++) {
            if(mask&(1<<i)) {
                sum+=a[i];
            } else {
                sum-=a[i];
            }
        }
        if(sum%360==0) {
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}