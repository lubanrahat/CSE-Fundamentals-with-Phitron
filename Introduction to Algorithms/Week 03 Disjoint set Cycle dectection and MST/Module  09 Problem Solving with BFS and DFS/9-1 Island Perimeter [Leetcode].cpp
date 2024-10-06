/*
https://leetcode.com/problems/island-perimeter/
class Solution {
public:
    bool vis[105][105];
    int ans; 
    int n,m;
    bool valid(int i,int j) {
        if(i >= 0 && i < n && j >= 0 && j < m) {
            return true;
        }
        return false;
    }
    vector<pair<int,int>> d = { {0,1},{0,-1},{-1,0},{1,0} };
    void dfs(int si,int sj,vector<vector<int>>& grid) {
        vis[si][sj] = true;
        for(int i = 0; i < 4; i++) {
            int ci = si + d[i].first;
            int cj = sj + d[i].second;
            if(valid(ci,cj)) {
                if(grid[ci][cj] == 0) ans++;
            } else {
                ans++;
            }
            if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj] == 1) {
                dfs(ci,cj,grid); 
            }
        }
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        memset(vis,false,sizeof(vis));
        n = grid.size();
        m = grid[0].size();
        ans = 0;
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[i].size(); j++) {
                if(!vis[i][j] && grid[i][j] == 1) {
                    dfs(i,j,grid);
                }
            }
        }
        return ans;
    }
};
*/