#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef unsigned long long u64;
typedef unsigned u32;
#define PI 3.1415926535897932384626
#define rep(i,n) for(int i = 0; i < n; i++)
#define tr(it,a) for(auto it = a.begin(); it != a.end(); it++)

const int N = 1e3 + 10;
bool vis[N][N];
vector<pair<int,int>> d={{1,0},{-1,0},{0,-1},{0,1}};
map<pair<int, int>, pair<int, int>> par;

int n, m;

char graph[N][N];

bool valid(int ci, int cj)
{

    if (ci >= 0 && ci < n && cj >= 0 && cj < m && graph[ci][cj] != '#')
    {
        return true;
    }
    return false;
}

void bfs(int si, int sj)
{
    vis[si][sj] = true;

    queue<pair<int, int>> q;
    q.push({si, sj});

    while (!q.empty())
    {
        pair<int, int> node = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ci = node.first + d[i].first;
            int cj = node.second + d[i].second;

            if (valid(ci, cj) && !vis[ci][cj])
            {
                vis[ci][cj] = true;
                q.push({ci, cj});
                par[{ci, cj}] = {node.first, node.second};
            }
        }
    }
}

int main()
{

    cin >> n >> m;
    int si,sj,di,dj;

    memset(vis, false, sizeof(vis));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> graph[i][j];
            if(graph[i][j] == 'D') {
                si = i;
                sj = j;
            }
            if(graph[i][j] == 'R') {
                di = i;
                dj = j;
            }
        }
        
    }
    
    bfs(si, sj);

    if(vis[di][dj]) {
        int sti = par[{di, dj}].first, stj = par[{di, dj}].second;

        while (graph[sti][stj] != 'D')
        {

            graph[sti][stj] = 'X';

            int Nsti = par[{sti, stj}].first;
            stj = par[{sti, stj}].second;

            sti = Nsti;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << graph[i][j];
        }
        cout << endl;
    }

    return 0;
}