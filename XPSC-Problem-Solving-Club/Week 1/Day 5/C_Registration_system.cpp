#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    int t;
    cin>>t;
    map<string,int> mp;
    string s;
    while(t--) {
        cin>>s;
        if(mp.count(s) == 0) {
            cout<<"OK\n";
            mp[s] = 1;
        } else {
            cout<<s<<mp[s]<<'\n';
            mp[s] += 1;
        }
    }

    return 0;
}