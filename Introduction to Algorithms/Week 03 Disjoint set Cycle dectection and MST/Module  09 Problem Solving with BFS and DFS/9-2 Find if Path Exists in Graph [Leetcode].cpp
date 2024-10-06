/*
https://leetcode.com/problems/find-if-path-exists-in-graph/
class Solution {
public:
    vector<int> adj[200005];
    bool vis[200005];
    void dfs(int s) {
        vis[s] = true;
        for(int i: adj[s]) {
            if(!vis[i]) {
                dfs(i);
            }
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        memset(vis,false,sizeof(vis));
        for(int i = 0; i < edges.size(); i++) {
            int a = edges[i][0];
            int b = edges[i][1];
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        dfs(source);
        return vis[destination];
    }
};
*/