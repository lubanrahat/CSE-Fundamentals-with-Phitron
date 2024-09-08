#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef unsigned long long u64;
typedef unsigned u32;
#define PI 3.1415926535897932384626
#define rep(i,n) for(int i = 0; i < n; i++)
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)

const int N = 1e5+5;

vector<vector<int>> adj(10001);
vector<bool> visited(10001,false);
vector<int> level(10001,-1);

void bfs(int s) {
    queue<int> q;
    q.push(s);
    visited[s] = true;
    level[s] = 0;
    while(!q.empty()) {
        int node = q.front();
        q.pop();
        for(int i: adj[node]) {
            if(visited[i] == false) {
                visited[i] = true;
                q.push(i);
                level[i] = level[node]+1;
            }
        }
    }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int vertex,edge;
    cin>>vertex>>edge;

    rep(i,edge) {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int target;
    cin>>target;

    bfs(0);

    vector<int> answer;

    for(int i = 0; i < vertex; i++) {
        if(level[i] == target) {
            answer.push_back(i);
        }
    }

    reverse(answer.begin(),answer.end());
    for(int i: answer) cout<<i<<" ";
    cout<<endl;

    return 0;
}