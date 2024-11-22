#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(),(x).end()

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);

    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }

    map<int,int> freq;
    int unique_count=0;
    ll count=0;
    int r= 0;

    for (int l=0;l<n;l++) {
        while(r<n) {
            if(freq[a[r]]==0&&unique_count==k) {
                break;
            }
            if(freq[a[r]]==0) {
                unique_count++;
            }
            freq[a[r]]++;
            r++;
        }
        count+=(r-l);
        freq[a[l]]--;
        if (freq[a[l]]==0) {
            unique_count--;
        }
    }

    cout<<count<<endl;

    return 0;
}