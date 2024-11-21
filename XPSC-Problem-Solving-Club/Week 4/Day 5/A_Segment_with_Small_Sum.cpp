#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(),(x).end()

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    int n;
    ll s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll current_sum = 0;
    int l = 0, max_length = 0;

    for (int r = 0; r < n; r++) {
        current_sum += a[r];
        
        while (current_sum > s) {
            current_sum -= a[l];
            l++;
        }
        
        max_length = max(max_length, r - l + 1);
    }

    cout << max_length << endl;

    return 0;
}