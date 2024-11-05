#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int tuesdays = n/7;
        int remDay = n%7;

        if(remDay >= 2) tuesdays += 1;
        cout<<tuesdays<<endl;

    }

    return 0;
}