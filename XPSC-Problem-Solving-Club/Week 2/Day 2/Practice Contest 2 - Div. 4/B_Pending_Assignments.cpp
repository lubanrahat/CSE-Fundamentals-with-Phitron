#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--) {
        int a,b,day;
        cin>>a>>b>>day;
        if(a*b <= day*24*60) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}