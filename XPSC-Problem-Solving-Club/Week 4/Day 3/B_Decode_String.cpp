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

    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans;
    for (int i = 0; i < n;)
    {
        if (s[i + 2] == '0' && s[i + 3] != '0')
        {
            ans += 96 + stoi(s.substr(i, 2));
            i += 3;
        }
        else
        {
            ans += 96 + (s[i] - '0');
            i++;
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
