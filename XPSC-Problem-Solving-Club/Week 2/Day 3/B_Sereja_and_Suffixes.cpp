#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef unsigned long long u64;
typedef unsigned u32;
#define PI 3.1415926535897932384626
#define rep(i, n) for (int i = 0; i < n; i++)
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<int> suffixDistinct(n);
    set<int> distinctSet;
    for (int i = n - 1; i >= 0; i--) {
        distinctSet.insert(a[i]);
        suffixDistinct[i] = distinctSet.size();
    }
    for (int i = 0; i < m; i++) {
        int l;
        cin >> l;
        cout << suffixDistinct[l - 1] << endl;
    }

    return 0;
}