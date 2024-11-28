#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{

    int n, k;
    cin >> n >> k;
    for (int i = n - k; i <= n; i++)
    {
        cout << i << " ";
    }
    for (int i = n - k - 1; i >= 1; i--)
    {
        cout << i << " ";
    }
    cout << endl;
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