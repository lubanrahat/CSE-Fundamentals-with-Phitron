#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--) {
        ll n,secLast,sum = 0,last;
        cin>>n;
        vector<ll> arr(n);
        for(ll i = 0; i < n-2; i++) {
            cin>>arr[i];
            sum += arr[i];
        }
        cin>>secLast;
        secLast -= sum;
        cin>>last;
        last -= secLast;
        cout<<last<<endl;
    }

    return 0;
}