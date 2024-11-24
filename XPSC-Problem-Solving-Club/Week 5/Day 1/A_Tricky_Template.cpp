#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()

void solve()
{
    ll n;
    cin >> n;

    string a, b, c;
    cin >> a >> b >> c;

    bool flag = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != c[i] and b[i] != c[i])
        {
            flag = 1;
            break;
        }
    }

    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{

    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    ll T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
}