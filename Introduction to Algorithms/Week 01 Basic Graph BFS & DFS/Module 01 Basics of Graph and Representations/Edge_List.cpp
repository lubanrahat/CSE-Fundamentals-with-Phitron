#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef unsigned long long u64;
typedef unsigned u32;
#define PI 3.1415926535897932384626
#define rep(i,n) for(int i = 0; i < n; i++)
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,e;
    cin>>n>>e;

    vector<pair<int,int>> edge;

    while(e--) {
        int a,b;
        cin>>a>>b;
        edge.push_back({a,b});
    }

    // for(int i = 0; i < edge.size(); i++) {
    //     cout<<edge[i].first<<" "<<edge[i].second<<endl;
    // }

    for(auto i:edge) {
        cout<<i.first<<" "<<i.second<<" "<<endl;;
    }

    return 0;
}