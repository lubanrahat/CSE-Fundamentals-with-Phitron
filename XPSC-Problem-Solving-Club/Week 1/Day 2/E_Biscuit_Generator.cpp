#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    int a,b,t;
    cin>>a>>b>>t;

    int max_product = (2*t+1) / (2*a);
    cout<<max_product * b<<endl;

    return 0;
}