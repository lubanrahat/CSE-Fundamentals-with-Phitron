#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()

void solve()
{
    ll n;
    cin >> n;

    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    map<char, int> hMap;
    int curr = 97;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cout << char(curr);
            hMap[curr]++;
            curr++;
        }
        else
        {
            for (auto itr : hMap)
            {
                if (itr.second == arr[i])
                {
                    cout << char(itr.first);
                    hMap[itr.first]++;
                    break;
                }
            }
        }
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    ll T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
}