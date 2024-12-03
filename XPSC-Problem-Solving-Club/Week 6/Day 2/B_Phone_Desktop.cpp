#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin>>x>>y;
        int total_cells = x + 4 * y;
        int screens = (total_cells + 14) / 15; 
        cout <<screens<< endl;
    }

    return 0;
}