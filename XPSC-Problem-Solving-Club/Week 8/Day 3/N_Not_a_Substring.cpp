#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        int n = s.size();
        if(s == "()") {
            cout<<"NO"<<endl;
            return 0;
        }
        int i = 0;
        bool check = false;
        while(i < n-1) {
            if(s.substr(i,2) == ")(") {
                check = true;
                break;
            }
            i++;
        }
        string ans = "";
        if(check) {
            for(int i = 0; i < n; i++) {
                ans += "(";
            }
            for(int i = 0; i < n; i++) {
                ans += ")";
            }
            cout<<"YES"<<endl;
            cout<<ans<<endl;
        } else {
            for(int i = 0; i < n; i++) {
                ans += "()";
            }
            if(ans == s) {
                cout<<"NO"<<endl;
            } else {
                cout<<"YES"<<endl;
                cout<<ans<<endl;
            }
        }
    }

    return 0;
}