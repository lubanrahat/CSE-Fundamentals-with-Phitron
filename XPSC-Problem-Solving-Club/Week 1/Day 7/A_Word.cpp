#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    string s;
    cin>>s;

    int upper = 0,lower = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            upper++;
        } else {
            lower++;
        }
    }
    for(int i = 0; i < s.size(); i++) {
        if(upper == 0) {
            cout<<s<<endl;
            break;
        }else if(upper > lower) {
            for(int i = 0; i < s.size(); i++) {
                s[i] = char(toupper(s[i]));
            }
            cout<<s<<endl;
            break;
        } else {
            for(int i = 0; i < s.size(); i++) {
                s[i] = char(tolower(s[i]));
            }
            cout<<s<<endl;
            break;
        }
    }

    return 0;
}