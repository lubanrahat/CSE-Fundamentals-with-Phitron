#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef unsigned long long u64;
typedef unsigned u32;
#define PI 3.1415926535897932384626
#define rep(i,n) for(int i = 0; i < n; i++)
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)

void dfs(int node,vector<int> adjList[],vector<bool>&visited) {
    visited[node] = true;
    cout<<node<<" ";
    for(int i= 0; i < adjList[node].size(); i++) {
        if(!visited[adjList[node][i]]) {
            dfs(adjList[node][i],adjList,visited);
        }
    }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int vertex,edges;
    cin>>vertex>>edges;
    vector<int> adjList[vertex];

    int u,v;

    for(int i = 0; i < edges; i++) {
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    vector<bool> visited(vertex,false);

    dfs(0,adjList,visited);

    return 0;
}