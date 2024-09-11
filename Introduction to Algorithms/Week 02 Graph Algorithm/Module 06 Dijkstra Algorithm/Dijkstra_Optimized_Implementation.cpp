#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef unsigned long long u64;
typedef unsigned u32;
#define PI 3.1415926535897932384626
#define rep(i,n) for(int i = 0; i < n; i++)
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)

const int N = 1e5+5;
vector<pair<int,int>> adj[N];
int dis[N];

class cmp {
public:
    bool operator()(pair<int,int> a,pair<int,int> b) {
        return a.second > b.second;
    }
};

void dijkstra(int src) {
    priority_queue<pair<int,int>,vector<pair<int,int>>,cmp> pq;
    pq.push({src,0});
    dis[src] = 0;
    
    while(!pq.empty()) {
        auto prent = pq.top();
        pq.pop();
        int node = prent.first;
        int cost = prent.second;

        for(auto child: adj[node]) {
            int childNode = child.first;
            int childCost = child.second;

            if(cost+childCost < dis[childNode]) {
                dis[childNode] = cost+childCost;
                pq.push({childNode,dis[childNode]});
            }
        }
    }
}
 
int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,e;
    cin>>n>>e;

    for(int i = 0; i < e; i++) {
        int a,b,c;
        cin>>a>>b>>c;
        adj[a].push_back({b,c});
        adj[b].push_back({a,c});
    }

    for(int i = 0; i < n; i++) {
        dis[i] = INT_MAX;
    }

    dijkstra(0);

    for(int i = 0; i < n; i++) {
        cout<<dis[i]<<" ";
    }

    return 0;
}