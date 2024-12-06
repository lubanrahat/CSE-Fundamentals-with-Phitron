#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 3e5 + 9;

void solve() {
    ll x,y;
    cin>>x>>y;
    ll ans=(y+1)/2,xx=0;
    if(y%2==1) {
        xx=(y/2)*7+11;
    } else {
        xx=(y/2)*7;
    }
    if(x<=xx) {
        cout<<ans<<endl;
    } else {
        ll baki=x-xx;
        cout<<ans+(baki+14)/15<<endl;
    }
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