#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef unsigned long long u64;
typedef unsigned u32;
#define PI 3.1415926535897932384626
#define rep(i,n) for(int i = 0; i < n; i++)
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)

vector<int> v[1005];
bool vis[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (int i = 0; i < v[par].size(); i++) {
            int child = v[par][i];
            if (vis[child] == false) {
                q.push(child);
                vis[child] = true;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    rep(i,e) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
    }
    memset(vis, false, sizeof(vis));
    int q;
    cin >> q;
    rep(i,q) {
        int si,sj;
        cin>>si>>sj;
        if(!v[si].empty())
        {
            int flag = 0;
            for (int val : v[si]) {
                if(si == sj) flag = 1;
                if (val == sj) flag = 1;;
            }
            if (flag == 1) cout << "YES" << endl;  
            else cout << "NO" << endl;
        }
        else if(si == sj) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}