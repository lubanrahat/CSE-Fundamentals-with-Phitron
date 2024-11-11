#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    ios::sync_with_stdio(false), cin.tie(nullptr);

    ll t;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        ll n, m, h, sum = 0;
        cin >> n >> m >> h;
        vector<ll> v1, v2;
        for (ll j = 0; j < n; j++)
        {
            ll x;
            cin >> x;
            v1.push_back(x);
        }
        for (ll j = 0; j < m; j++)
        {
            ll x;
            cin >> x;
            v2.push_back(x * h);
        }
        sort(v1.begin(), v1.end(), greater<int>());
        sort(v2.begin(), v2.end(), greater<int>());
        for (ll k = 0; k < min(n, m); k++)
        {
            if (v1[k] >= v2[k])
                sum += v2[k];
            else
                sum += v1[k];
        }
        cout << sum << endl;
    }

    return 0;
}