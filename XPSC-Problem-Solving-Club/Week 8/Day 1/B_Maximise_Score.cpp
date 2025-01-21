#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 3e5 + 9;

inline void solve()
{

    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }
    int min_score = INT_MAX;
    for (int i = 0; i < N - 1; ++i)
    {
        int score = abs(A[i] - A[i + 1]);
        min_score = min(min_score, score);
    }

    cout << min_score << endl;
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