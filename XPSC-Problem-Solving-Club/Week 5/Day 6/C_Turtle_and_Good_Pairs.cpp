#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {

    ll n;
    cin>>n;

    string s;
    cin>>s;

    map<char,ll> mp;
    for(auto i: s) mp[i]++;
    priority_queue<pair<ll,char>> pq;
    for(auto i: mp) pq.push({i.second,i.first});
    string ans = "";
    while(pq.size() > 1) {
        auto it = pq.top();
        pq.pop();
        auto it2 = pq.top();
        pq.pop();
        if(it.first != 1) pq.push({it.first-1,it.second});
        if(it2.first != 1) pq.push({it2.first-1,it2.second});
        ans += it.second;
        ans += it2.second;
    }
    if(pq.size() == 1) {
        auto it = pq.top();
        pq.pop();
        for(ll i = 0; i < it.first; i++) ans += it.second;
    }
    cout<<ans<<endl;

}

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);

    int T; cin>>T;

    while(T--) {
        solve();
    }

    return 0;
}