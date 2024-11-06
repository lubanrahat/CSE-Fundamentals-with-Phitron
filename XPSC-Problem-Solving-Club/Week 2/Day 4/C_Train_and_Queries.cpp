#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{

    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);

    map<ll, ll> mp1, mp2;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (mp1[a[i]] == 0)
        {
            mp1[a[i]] = i + 1;
        }
        mp2[a[i]] = i + 1;
    }

    int x, y;
    while (k--)
    {
        cin >> x >> y;
        if (mp1[x] > 0 && mp1[y] > 0 && mp1[x] < mp2[y])
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}

int main()
{

    ios::sync_with_stdio(false), cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}