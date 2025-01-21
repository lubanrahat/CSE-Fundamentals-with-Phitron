#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 3e5 + 9;

inline void solve()
{

    int N;
    cin >> N;
    string S;
    cin >> S;
    int count = 0;
    for (int i = 1; i < N; ++i)
    {
        if (S[i] != S[i - 1])
        {
            count++;
        }
    }
    if (count % 2 == 1)
    {
        cout << "Zlatan\n";
    }
    else
    {
        cout << "Ramos\n";
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