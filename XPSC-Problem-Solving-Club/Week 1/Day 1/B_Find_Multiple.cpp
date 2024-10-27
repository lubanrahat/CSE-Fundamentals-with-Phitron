#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    int a,b,c;
    cin>>a>>b>>c;

    int target = ((a+c-1)/c)*c;

    int ans = (target >= a && target <= b) ? target: -1;
    cout<<ans<<endl;

    return 0;
}