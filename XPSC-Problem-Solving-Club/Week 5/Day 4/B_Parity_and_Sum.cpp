#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(),(x).end()

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);

    int t; 
    cin >> t;

    while (t--) {
        int n; 
        cin >> n;
        vector<int> a(n);
        int odd_count = 0, even_count = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] % 2 == 0)
                even_count++;
            else
                odd_count++;
        }
        cout << min(odd_count, even_count) << endl;
    }

    return 0;
}