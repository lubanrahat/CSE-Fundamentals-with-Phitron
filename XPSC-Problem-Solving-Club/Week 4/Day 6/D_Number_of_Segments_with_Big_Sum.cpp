#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(),(x).end()

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);

    int n;
    ll s;
    cin>>n>>s;
    vector<int> a(n);
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }

    ll current_sum=0;
    int r=0;
    ll count=0;

    for (int l=0;l<n;l++) {
        while (r<n &&current_sum<s) {
            current_sum+=a[r];
            r++;
        }

        if (current_sum>=s) {
            count+=(n-r+1);
        }

        current_sum-=a[l];
    }

    cout<<count<<endl;

    return 0;
}