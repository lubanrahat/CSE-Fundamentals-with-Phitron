#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    int ptrA = 0, ptrB = 0;
    ll ans = 0;

    while (ptrA < n && ptrB < m) {
        int curr = a[ptrA];
        int cntA = 0, cntB = 0;
        while (ptrA < n && a[ptrA] == curr) {
            cntA++, ptrA++;
        }
        while (ptrB < m && b[ptrB] < curr) {
            ptrB++;
        }

        while (ptrB < m && b[ptrB] == curr) {
            cntB++, ptrB++;
        }

        ans += (1LL * cntA * cntB);
    }

    cout << ans << endl;
    return 0;
}