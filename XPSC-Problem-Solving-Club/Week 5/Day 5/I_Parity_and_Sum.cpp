#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()

void solve()
{

    int n;
    cin >> n;
    vector<ll> v(n);
    vector<ll> even, odd;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 0)
        {
            even.push_back(v[i]);
        }
        else
        {
            odd.push_back(v[i]);
        }
    }
    if (even.size() == 0 || odd.size() == 0)
    {
        cout << '0' << endl;
    }
    else
    {
        sort(all(even));
        sort(all(odd));
        ll mx = odd.back();
        int ans = 0;
        bool flag = false;
        for (int i = 0; i < even.size(); i++)
        {
            if (even[i] > mx)
            {
                flag = true;
                break;
            }
            else
            {
                mx += even[i];
                ans++;
            }
        }
        if (flag)
            cout << even.size() + 1 << endl;
        else
            cout << ans << endl;
    }
}

int main()
{

    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        solve();
    }

    return 0;
}