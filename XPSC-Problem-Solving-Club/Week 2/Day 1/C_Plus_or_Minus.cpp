#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--) {
        int a,b,c;
        cin>>a>>b>>c;

        if(a+b == c || b+c == c) {
            cout<<"+"<<endl;
        } else {
            cout<<"-"<<endl;
        }
    }

    return 0;
}