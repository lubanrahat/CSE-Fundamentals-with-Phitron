#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef unsigned long long u64;
typedef unsigned u32;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < n; i++)
#define per(i, a, n) for (int i = n - 1; i >= a; i--)
#define print(v)             \
    for (auto data : v)      \
        cout << data << " "; \
    cout << '\n'
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)

void solve()
{

    int t, i, j, k, l;
    int n, m;
    cin >> n >> m;
    int a[n][m];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    i64 ans = -1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            i64 sum = 0;

            for (k = i, l = j; k < n && l < m; k++, l++)
                sum += a[k][l];
            for (k = i, l = j; k < n && l >= 0; k++, l--)
                sum += a[k][l];
            for (k = i, l = j; k >= 0 && l < m; k--, l++)
                sum += a[k][l];
            for (k = i, l = j; k >= 0 && l >= 0; k--, l--)
                sum += a[k][l];
            sum -= 3 * (a[i][j]);
            ans = max(ans, sum);
        }
    }

    cout << ans << endl;
}

int main()
{

    ios::sync_with_stdio(false), cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        solve();
    }

    return 0;
}
