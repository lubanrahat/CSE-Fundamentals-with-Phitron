#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 3e5 + 9;

void solve() {
    ll n,k;
    cin>>n>>k;
    ll a[n+1];
    for(ll i=0;i<n;i++) {
        cin>>a[i];
    }
    sort(a,a+n);
    a[n]=-1;
    ll c=0;
    vector<ll> v;
    for(ll i=0;i<n;i++) {
        c++;
        if(a[i]!=a[i+1]) {
            if(c>=k) {
                v.push_back(a[i]);
            }
            c=0;
        }
    }
    if(v.size()==0) {
        cout<<"-1"<<endl;
        return;
    }
    ll dis=0,x=*(v.begin()),p,q;
    for(auto it=v.begin();it!=v.end();it++) {
        if(*it==*(v.begin())) {
            if(*it-x>=dis) {
                p=*it;
                q=x;
            }
            break;
        }
        if(*it+1<*(it+1)) {
            if(*it-x>=dis) {
                dis=*it-x;
                p=*it;
                q=x;
            }
            x=*(it+1);
        }
    }
    cout<<q<<" "<<p<<endl;
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