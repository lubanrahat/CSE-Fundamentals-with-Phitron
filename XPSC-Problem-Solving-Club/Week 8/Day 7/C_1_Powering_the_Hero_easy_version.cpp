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
        int ar[n];
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        priority_queue<int> pqr;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (ar[i])
            {
                pqr.push(ar[i]);
            }
            else if (pqr.size())
            {
                int x = pqr.top();
                sum += x;
                pqr.pop();
            }
        }
        cout << sum << endl;
    }

    return 0;
}