#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(),(x).end()

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    int n;
    ll s;
    cin>>n>>s;
    vector<int>a(n);
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }

    ll current_sum=0;
    int l=0,min_length=INT_MAX;

    for (int r=0;r<n;r++) {
        current_sum+=a[r];

        while(current_sum>=s) {
            min_length=min(min_length,r-l+1);
            current_sum-=a[l];
            l++;
        }
    }

    if (min_length==INT_MAX) {
        cout<<-1<<endl;
    } else {
        cout<<min_length<<endl;
    }

    return 0;
}