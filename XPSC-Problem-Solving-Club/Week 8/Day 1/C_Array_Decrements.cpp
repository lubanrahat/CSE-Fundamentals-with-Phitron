#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 3e5 + 9;

inline void solve()
{

    int n;
    cin >> n;
    vector<int> a(n), b(n);
    
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> b[i];
    }
    bool possible = true;
    int diff = -1;

    for (int i = 0; i < n; ++i)
    {
        if (a[i] < b[i])
        {
            possible = false;
            break;
        }

        int current_diff = a[i] - b[i];
        if (diff == -1)
        {
            diff = current_diff;
        }
        else if (current_diff != diff)
        {
            possible = false;
            break;
        }
    }

    if (possible)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // std::cout << std::fixed << std::setprecision(10);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}