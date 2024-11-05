#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    ll n;
    cin>>n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    ll k = 1,ans = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] >= ans) ans++;
    }
    cout<<ans-1<<endl;

    return 0;
}