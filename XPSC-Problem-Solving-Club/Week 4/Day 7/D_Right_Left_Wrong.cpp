#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(),(x).end()

void solve() {
    int t; 
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        string s; 
        for (int i = 0; i < n; ++i) cin >> a[i];
        cin >> s;
        long long score = 0;
        int l = -1;
        for (int i = 0; i < n; ++i) {
            if (s[i] == 'L') {
                l = i; 
            } 
            if (s[i] == 'R' && l != -1) {
                for (int j = l; j <= i; ++j) {
                    score += a[j];
                }
                l = -1; 
            }
        }
        cout << score << endl;
    }
}


int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);

    solve();

    return 0;
}