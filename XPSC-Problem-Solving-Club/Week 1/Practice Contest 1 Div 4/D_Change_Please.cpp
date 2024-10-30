#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;
        int ans = 100 - x;
        if(ans % 10 == 0) cout<<ans<<endl;
        else
        {
            int n = ans%10;
            cout<<ans-n<<endl;
        }
    }

    return 0;
}
