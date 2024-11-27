#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    int i = 0, j = 0, cnt = 0, ans = 0;
    bool one = false;
    while (i < n && j < n)
    {
        if (s[j] == '1')
        {

            if (!one)
                ans += (cnt / (k + 1));
            else
                ans += ((cnt - k) / (k + 1));
            i = j;
            cnt = 0;
            one = true;
        }
        else if (s[j] == '0')
            cnt++;
        j++;
    }
    if (!one)
        ans += ((cnt - 1) / (k + 1)) + 1;
    else
        ans += (cnt / (k + 1));
    cout << ans << endl;
}

int main()
{

    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}