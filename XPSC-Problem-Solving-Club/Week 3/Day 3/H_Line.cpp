#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef unsigned long long u64;
typedef unsigned u32;
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define all(x) (x).begin(),(x).end()
#define rep(i,n) for(int i = 0; i < n; i++)
#define per(i,a,n) for (int i = n-1; i >= a; i--)
#define print(v) for(auto data : v) cout<<data<<" "; cout<<'\n'
#define tr(it,a) for(auto it = a.begin(); it != a.end(); it++)

void solve() {

    i64 n;cin>>n;
    string s;cin>>s;

    vector<i64> diffs(n,0);

    i64 sum = 0;

    for(i64 i = 0; i < n; i++) {
        i64 cur = (s[i] == 'L') ? i : n-i-1;
        i64 mx = (i > (n-i-1)) ? i : (n-i-1);
        sum += cur;
        i64 diff = mx-cur;
        diffs[i] = diff;
    }
    sort(diffs.begin(),diffs.end(),greater<int>());
    for(i64 i = 0; i < n; i++) {
        sum += diffs[i];
        cout<<sum<<" ";
    }
    cout<<endl;

}

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    int T;cin>>T;

    while(T--) {
        solve();
    }

    return 0;
}
