#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--) {
        ll n;
        cin>>n;
        string b;
        cin>>b;
        vector<bool> flag(26,0);
        for(int i = 0; i < n; i++) {
            flag[b[i] - 'a']  = 1;
        }
        string a("");
        for(int i = 0; i < 26; i++) {
            if(!flag[i]) continue;
            a += (char)('a'+i);
        }
        map<char,char> mp;
        for(int i = 0; i < a.size(); i++) {
            mp[a[i]] = a[a.size()-1-i];
        }
        for(int i = 0; i < b.size(); i++) {
            b[i] = mp[b[i]];
        }
        cout<<b<<endl;
    }

    return 0;
}