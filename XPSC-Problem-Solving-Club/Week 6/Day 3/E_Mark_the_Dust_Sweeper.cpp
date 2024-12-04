#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--) {
        ll n;
        cin>>n;
        ll x=0,res=0;
        for(ll i=1;i<n;i++) {
            cin>>x;
            res+=x?x:(res>0);
        }
        cin>>x;
        cout<<res<<endl;
    }

    return 0;
}