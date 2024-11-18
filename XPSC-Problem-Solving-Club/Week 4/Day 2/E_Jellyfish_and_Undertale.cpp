#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
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

    ll a, b, n, sum = 0;
    cin >> a >> b >> n;
    vector<ll> v(n);
    for (ll j = 0; j < n; j++)
        cin >> v[j];
    sort(v.begin(), v.end());
    for (ll j = 0; j < n; j++)
    {
    step:
        if (b != 1)
        {
            sum += (b - 1);
            b = 1;
            goto step;
        }
        else
        {
            sum++;
            if (b + v[j] > a)
            {
                b = a - 1;
                if (b != 1)
                {
                    sum += (b - 1);
                    b = 1;
                }
            }
            else
            {
                b += (v[j] - b);
                if (b != 1)
                {
                    sum += (b - 1);
                    b = 1;
                }
            }
            if (j == n - 1 && b > 0)
                sum += b;
        }
    }
    cout << sum << endl;
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
