#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    ios::sync_with_stdio(false), cin.tie(nullptr);

    float x, y, z;
    cin >> x >> y >> z;
    float a = y / 2;
    if (x + y + z == 4)
    {
        x += a, z += a;
        if (x > z)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }
    else
    {
        float b = 4 - (x + y + z);
        x += b, x += a, z += a;
        if (x > z)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }

    return 0;
}