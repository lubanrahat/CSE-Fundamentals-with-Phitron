#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> a(n);
    map<string, int> mp;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        if (mp.find(a[i]) == mp.end()) { 
            cout << a[i] << endl;
            mp[a[i]] = 1;
        }
    }

    return 0;
}