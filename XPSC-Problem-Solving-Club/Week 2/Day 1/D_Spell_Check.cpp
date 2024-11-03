#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    int t;
    cin>>t;
    string str = "Trumi";
    sort(str.begin(),str.end());
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        if(s.size() > 5) {
            cout<<"NO\n";
        } else {
            vector<bool> nek(4,false);
            bool isUpper = false;
            for(int i=0;i<s.size();i++) {
                if(s[i] == 'T' && s[i] >= 'A' && s[i] <= 'Z') {
                    isUpper = true;
                    break;
                }
            }
            for(int i=0;i<s.size();i++) {
                if(s[i] == 'i') nek[0] = true;
                if(s[i] == 'm') nek[1] = true;
                if(s[i] == 'u') nek[2] = true;
                if(s[i] == 'r') nek[3] = true;
            }
            bool valid = true;
            for(auto i: nek) {
                if(i == false) {
                    valid = false;
                    break;
                }
            }
            if(isUpper && valid) cout<<"YES\n";
            else cout<<"NO\n";
        }


    }

    return 0;
}