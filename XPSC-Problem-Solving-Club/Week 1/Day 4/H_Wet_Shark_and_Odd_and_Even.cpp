#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    ll n,sum = 0;
    cin>>n;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
        sum += arr[i];
    }

    if(sum % 2 == 0) {
        cout<<sum<<endl;
    } else {
        sort(arr.begin(),arr.end());
        for(int i = 0; i < n; i++) {
            if((sum-arr[i]) % 2 == 0) {
                cout<<sum-arr[i]<<endl;
                break;
            }
        }
    }

    return 0;
}