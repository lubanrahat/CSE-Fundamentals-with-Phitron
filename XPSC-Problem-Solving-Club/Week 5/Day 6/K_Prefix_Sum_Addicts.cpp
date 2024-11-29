#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {

    ll n,k;
    cin>>n>>k;
    vector<ll> s(k);
    for(ll i = 0; i < k; i++) {
        cin>>s[i];
    }
    if(k == 1) {
        cout<<"YES"<<endl;
    } else {
        vector<ll> v(n);
        ll j = n-1;
        for(int i = k-1; i >= 1; i--) {
            v[j] = s[i]-s[i-1];
            j--;
        }
        while(j >= 0) {
            v[j] = v[j+1];
            s[0] -= v[j];
            j--;
        }
        v[0] += s[0];
        if(is_sorted(v.begin(),v.end())) {
            cout<<"Yes"<<endl;
        } else {
            cout<<"No"<<endl;
        }
    }

}

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);

    int T; cin>>T;

    while(T--) {
        solve();
    }

    return 0;
}