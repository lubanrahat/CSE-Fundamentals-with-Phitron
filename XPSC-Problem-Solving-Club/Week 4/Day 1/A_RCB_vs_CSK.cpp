#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    int x,y;
    cin>>x>>y;

    int foo = x-y;

    if(foo > 18) {
        cout<<"RCB"<<endl;
    } else if(foo == 18) {
        cout<<"RCB"<<endl;
    } else {
        cout<<"CSK"<<endl;
    }

    return 0;
}