#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 3e5 + 9;

void solve() {
    int n, m;
        cin>>n>>m; 
        vector<string>words(n);
        for (int i=0;i<n;i++) {
            cin >> words[i];
        }
        int total_length=0,count=0;
        for (const string&word:words) {
            int word_length=word.size();
            if (total_length+word_length<=m) {
                total_length+=word_length;
                count++;
            } else {
                break;
            }
        }
        cout << count << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--) {
        solve();
    }

    return 0;
}