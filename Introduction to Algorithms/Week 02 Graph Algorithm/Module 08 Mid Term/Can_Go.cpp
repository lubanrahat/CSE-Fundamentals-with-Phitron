
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
#define INF INT_MAX
#define rep(i,n) for(int i = 0; i < n; i++)

vector<pair<i64,i64>> adj[1005];
i64 dis[1005];

class cmp {
public:
    bool operator()(pair<i64,i64> a,pair<i64,i64> b) {
        return a.second > b.second;
    }
};

void dijkstra(i64 src) {
    priority_queue<pair<i64,i64>, vector<pair<i64,i64>>, cmp> pq;
    pq.push({src, 0});
    dis[src] = 0;
    
    while (!pq.empty()) {
        auto prent = pq.top();
        pq.pop();
        i64 node = prent.first;
        i64 cost = prent.second;

        for (auto child : adj[node]) {
            i64 childNode = child.first;
            i64 childCost = child.second;

            if (cost + childCost < dis[childNode]) {
                dis[childNode] = cost + childCost;
                pq.push({childNode, dis[childNode]});
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    i64 vertex, edge;
    cin >> vertex >> edge;

    for(int i = 1; i <= edge; i++) {
        i64 u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w}); 
    }

    for(int i = 1; i <= vertex; i++) {
        dis[i] = INF;
    }

    int source;
    cin >> source;
    dijkstra(source);

    int t;
    cin>>t;
    rep(i,t) {
        i64 d, dw;
        cin>>d >>dw;
        if (dis[d] <= dw) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}