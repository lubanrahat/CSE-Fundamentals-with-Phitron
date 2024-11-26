#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(),(x).end()

void solve() {
    ll n;
    cin >> n;

    cout << n / 2 + n % 2 << endl;

    ll i = 1, j = 3 * n;

    while (i < j) {
        cout << i << " " << j << endl;
        i += 3;
        j -= 3;
    }
    cout << endl;
}

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);

    int t;
    cin>>t;

    while(t--) {
        solve();
    }

    return 0;
}