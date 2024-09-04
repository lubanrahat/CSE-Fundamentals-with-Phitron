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
int level[1005];

void BFS(int src) {
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while(!q.empty()) {
        int f = q.front();
        q.pop();
        cout<<f<<endl;
        for(auto i: v[f]) {
            if(vis[f] == false) {
                q.push(f);
                vis[f] = true;
                level[i] = level[f]+1;
            }
        }
    }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,e;
    cin>>n>>e;
    memset(v,0,sizeof(v));
    while(e--) {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src;
    cin>>src;
    memset(vis,false,sizeof(vis));

    BFS(src);

    return 0;
}