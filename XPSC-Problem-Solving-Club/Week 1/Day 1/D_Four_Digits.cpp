#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    string s;
    cin>>s;

    if(s.size() == 4) {
        cout<<s<<endl;
    } else {
        while(1) {
            if(s.size() == 4) {
                break;
            } else {
                s.insert(s.begin(),'0');
            }
        }
        cout<<s<<endl;
    }

    return 0;
}