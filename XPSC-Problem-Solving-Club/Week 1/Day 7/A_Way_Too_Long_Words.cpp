#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        if(s.size() <= 10) {
            cout<<s<<endl;
        } else {
            cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
        }
    }

    return 0;
}