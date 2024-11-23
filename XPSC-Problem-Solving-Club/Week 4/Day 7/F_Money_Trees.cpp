#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(),(x).end()

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<int> a(n), h(n);  
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> h[i];
        long long current_fruits = 0;
        int start = 0, max_length = 0;

        for (int end = 0; end < n; ++end) {
            current_fruits += a[end];
            while (start < end && (h[end - 1] % h[end] != 0 || current_fruits > k)) {
                current_fruits -= a[start];
                ++start;
            }
            if (current_fruits <= k) {
                max_length = max(max_length, end - start + 1);
            }
        }
        cout << max_length << endl;
    }
}


int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);

    solve();

    return 0;
}