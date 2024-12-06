#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 3e5 + 9;

void solve() {
    ll n,ans=0,sum=0,prev=0,mx=0;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) {
        cin>>a[i];
    }
    for(ll i=0;i<n;i++) {
        mx=max(mx,a[i]);
        sum+=a[i];
        if(mx==sum-mx) {
            ans++;
        }
    }
    cout<<ans<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--) {
        solve();
    }

    return 0;
}