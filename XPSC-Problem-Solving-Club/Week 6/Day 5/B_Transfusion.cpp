#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 3e5 + 9;

void solve() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<ll>a(n);
        ll total_sum=0;
        for (ll i=0;i<n;i++) {
            cin>>a[i];
            total_sum+=a[i];
        }
        if (total_sum%n!=0) {
            cout<<"NO\n";
            continue;
        }
        ll target=total_sum/n;
        ll surplus=0;
        bool possible=true;
        for (int i=0;i<n; i++) {
            surplus+=(a[i] - target); 
            if (surplus<0) { 
                possible=false;
                break;
            }
        }
        cout << (possible?"YES":"NO")<<"\n";
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}