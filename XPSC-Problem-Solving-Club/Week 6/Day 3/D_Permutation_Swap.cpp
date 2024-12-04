#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a,ll b) {
    return (b == 0) ? a : gcd(b, a % b);
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--) {
        ll n;
        cin>>n;
        ll g = 0;
        for(ll i=1;i<=n;i++) {
            ll x;
            cin>>x;
            ll dif = i-x;
            dif = (dif>0) ? dif:-dif;
            g = gcd(g,dif);
        }
        cout<<g<<endl;
    }

    return 0;
}