#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    int l = 0;
    for (int r = 0; r < m; r++) {
        while (l < n && a[l] < b[r]) {
            l++; 
        }
        cout << l << " ";
    }
    cout << endl;

    return 0;
}