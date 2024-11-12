#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef unsigned long long u64;
typedef unsigned u32;
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define all(x) (x).begin(),(x).end()
#define rep(i,n) for(int i = 0; i < n; i++)
#define per(i,a,n) for (int i = n-1; i >= a; i--)
#define print(v) for(auto data : v) cout<<data<<" "; cout<<'\n'
#define tr(it,a) for(auto it = a.begin(); it != a.end(); it++)

void solve() {

    int n;
    cin>>n;
    int ar[n][n-1];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-1; j++){
            cin>>ar[i][j];
        }
    }
    map<int,int> mp;
    map<int,int> idx;
    for(int i = 0; i < n;i ++){
        mp[ar[i][n-2]]++;
        idx[ar[i][n-2]] = i;
    }
    int index,val;
    for(auto [x,y]:mp){
        if(y ==1 ) index = x;
        else val = x;
    }
    for(int i = 0; i < n-1; i++){
        cout<<ar[idx[index]][i]<<" ";
    }
    cout<<val<<endl;

}

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    int T;cin>>T;

    while(T--) {
        solve();
    }

    return 0;
}
