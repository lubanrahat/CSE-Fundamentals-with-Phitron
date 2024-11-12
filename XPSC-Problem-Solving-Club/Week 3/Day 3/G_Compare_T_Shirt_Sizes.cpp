#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
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

    string s, t;
    cin >> s >> t;
    int a = 0, b = 0, i;

    int x = s.size();
    int y = t.size();

    if (s == t)
        cout << "=" << endl;
    else if (s[x - 1] == 'M')
    {
        if (t[y - 1] == 'S')
            cout << ">" << endl;
        else
            cout << "<" << endl;
    }
    else if (t[y - 1] == 'M')
    {
        if (s[x - 1] == 'L')
            cout << ">" << endl;
        else
            cout << "<" << endl;
    }
    else if (s[x - 1] == 'S' && t[y - 1] == 'L')
        cout << "<" << endl;
    else if (s[x - 1] == 'L' && t[y - 1] == 'S')
        cout << ">" << endl;
    else if (s[x - 1] == t[y - 1])
    {
        if (s[x - 1] == 'S')
        {
            if (x > y)
                cout << "<" << endl;
            else
                cout << ">" << endl;
        }
        else
        {
            if (x < y)
                cout << "<" << endl;
            else
                cout << ">" << endl;
        }
    }
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
