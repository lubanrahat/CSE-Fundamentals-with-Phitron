#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    int n;
    cin>>n;
    string s[110];
    for(int i = 0; i < n; i++) {
        bool flag = false;
        cin>>s[i];
        for(int j = 0; j < i; j++) {
            if(s[i] == s[j]) {
                flag = true;
                break;
            }
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}