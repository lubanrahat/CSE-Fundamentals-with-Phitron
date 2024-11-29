#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {

    int n;
    cin>>n;
    priority_queue<ll> pq;
    for(int i = 0; i < n; i++) {
        ll a;
        cin>>a;
        pq.push(a);
    }
    while(pq.size() > 1) {
        ll fig1 = pq.top();
        pq.pop();
        ll fig2 = pq.top(); 
        pq.pop();
        ll new_rating = fig1-fig2;
        if(new_rating > 0) {
            pq.push(new_rating);
        }
    }
    if(pq.empty()) {
        cout<<0<<endl;
    } else {
        cout<<pq.top()<<endl;
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