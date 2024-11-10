#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    ios::sync_with_stdio(false), cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        if (n == 1)
        {
            cout << "YES\n";
        }
        else
        {
            bool flag = false;
            for (int i = 0; i < n - 1; i++)
            {
                if (v[i] == 0)
                {
                    continue;
                }
                else
                {
                    if (v[i] != v[i + 1])
                    {
                        flag = true;
                        break;
                    }
                }
            }
            if (flag)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
    }

    return 0;
}