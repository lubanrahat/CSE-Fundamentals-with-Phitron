#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    while(cin>>n) {
        solve();
        printf("%.4lf\n",sqrt(n));
    }
    return ;
}
int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    vector<ll> number;
    ll n;
    while(cin>>n) {
        number.push_back(n);
    }
    for(int i = number.size()-1; i >= 0; i--) {
        printf("%.4lf\n",sqrt(n));
    }
    
    // solve();

    return 0;
}