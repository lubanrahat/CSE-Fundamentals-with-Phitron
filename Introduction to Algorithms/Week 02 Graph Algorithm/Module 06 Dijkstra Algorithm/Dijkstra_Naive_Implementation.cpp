#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef unsigned long long u64;
typedef unsigned u32;
#define PI 3.1415926535897932384626
#define rep(i,n) for(int i = 0; i < n; i++)
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)

const int N = 100;
vector<pair<int,int>> adj[N];
int dis[N];

void dijkastra(int src) {
    queue<pair<int,int>> q;
    q.push({src,0});
    dis[src] = 0;

    while(!q.empty()) {
        auto prent = q.front();
        q.pop();
        int node = prent.first;
        int cost = prent.second;

        for(auto child: adj[node]) {
            int childNode = child.first;
            int childCost = child.second;
            
            if(cost + childCost < dis[childNode]) {
                dis[childNode] = cost+childCost;
                q.push({childNode,cost+childCost});
            }
        }
    }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,e;
    cin>>n>>e;

    while(e--) {
        int a,b,c;
        cin>>a>>b>>c;
        adj[a].push_back({b,c});
        adj[b].push_back({a,c});
    }

    for(int i = 0; i < n; i++) {
        dis[i] = INT_MAX;
    }

    dijkastra(0);

    for(int i = 0; i < n; i++) {
        cout<<dis[i]<<" ";
    }

    return 0;
}