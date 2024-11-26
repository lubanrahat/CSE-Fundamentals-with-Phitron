#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()

int main()
{

    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    long t;
    scanf("%ld", &t);
    while (t--)
    {
        long n;
        scanf("%ld", &n);
        long z(0);
        bool one(false), large(false);
        for (long p = 0; p < n; p++)
        {
            long x;
            scanf("%ld", &x);
            if (x == 0)
            {
                ++z;
            }
            else if (x == 1)
            {
                one = true;
            }
            else if (x > 1)
            {
                large = true;
            }
        }

        long res(0);
        if (z > (n + 1) / 2)
        {
            if (!one || large)
            {
                res = 1;
            }
            else
            {
                res = 2;
            }
        }

        printf("%ld\n", res);
    }

    return 0;
}