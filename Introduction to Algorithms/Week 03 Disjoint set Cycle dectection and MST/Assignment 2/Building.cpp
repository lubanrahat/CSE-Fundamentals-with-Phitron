#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef unsigned long long u64;
typedef unsigned u32;
#define PI 3.1415926535897932384626
#define rep(i,n) for(int i = 0; i < n; i++)
#define tr(it,a) for(auto it = a.begin(); it != a.end(); it++)

const int MAX_N = 1e6+5; 

int par[MAX_N];
int dsu_size[MAX_N];

int dsu_find(int node) {
    if(par[node] == -1) return node;
    int leader = dsu_find(par[node]);
    par[node] = leader;
    return leader;
}

void dsu_union_by_size(int node1,int node2) {
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if(dsu_size[leaderA] > dsu_size[leaderB]) {
        par[leaderB] = leaderA;
        dsu_size[leaderA] += dsu_size[leaderB];
    }
    else {
        par[leaderA] = leaderB;
        dsu_size[leaderB] += dsu_size[leaderA];
    }
}

class Edge {
public:
    int u,v,w;
    Edge(int u,int v,int w) {
        this-> u = u;
        this-> v = v;
        this->w = w;
    }
};

bool cmp(Edge a,Edge b) {
    return a.w < b.w;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    i64 n,e;
    cin>>n>>e;
    for(int i = 1; i <= n; i++) {
        par[i] = -1;
        dsu_size[i] = 1;
    }
    vector<Edge> edgeList;
    rep(i,e) {
        i64 u,v,w;
        cin>>u>>v>>w;
        edgeList.push_back(Edge(u,v,w));
    }
    sort(edgeList.begin(),edgeList.end(),cmp);

    i64 count = 0;

    for(Edge eg:edgeList) {
        int leaderA = dsu_find(eg.u);
        int leaderB = dsu_find(eg.v);
        if(leaderA == leaderB) continue;
        else {
            dsu_union_by_size(eg.u,eg.v);
            count+=eg.w;
        }
    }

    int cnt = 0;

    for(int i = 1;i <= n;i++) {
        if(par[i] == -1) {
            cnt++;
        }
    }

    if(cnt == 1) {
        cout<<count<<endl;
    }
    else {
        cout<<"-1"<<endl;
    }

    return 0;
}
