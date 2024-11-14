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

    int n;
    cin>>n;
    string s;
    cin>>s;
 
    int l = 0,r = n-1;
 
    while(l < r && s[l] != s[r]){
        l++;
        r--;
    }

    int ans=r-l + 1;
    cout<<ans<<endl;

}

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    int T;cin>>T;

    while(T--) {
        solve();
    }

    return 0;
}
