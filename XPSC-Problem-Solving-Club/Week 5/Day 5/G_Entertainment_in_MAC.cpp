#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{

    int n;
    cin >> n;
    string s;
    cin >> s;
    string s1 = s;
    reverse(s1.begin(),s1.end());
    bool flag = false;
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] == s1[i])
            continue;
        if (s[i] > s1[i])
        {
            flag = true;
        }
        else
            break;
    }
    if (flag)
        cout << s1 << s << endl;
    else
        cout << s << endl;
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