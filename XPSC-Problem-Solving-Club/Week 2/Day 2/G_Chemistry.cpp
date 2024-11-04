#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--) {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int> mp;
        for(int i = 0; i < n; i++) {
            mp[s[i]]++;
        }
        int cnt = 0;
        for(auto [key,num]: mp) {
            if(num % 2 != 0) {
                cnt++;
            }
        }
        cnt -= k;
        if(cnt <= 1) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}