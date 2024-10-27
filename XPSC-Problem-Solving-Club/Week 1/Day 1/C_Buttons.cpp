#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    int a,b,coin = INT_MIN;
    cin>>a>>b;

    if(a > b) swap(a,b);

    if(a == b) {
        coin = a+b;
    } else {
        for(int i = a; i <= b; i++) {
        for(int j = i+1; j <= b; j++) {
            coin = max(coin,i+j);
        }
    }
    }
    cout<<coin<<endl;

    return 0;
}