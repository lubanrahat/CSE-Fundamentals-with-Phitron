#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef unsigned long long u64;
typedef unsigned u32;
#define PI 3.1415926535897932384626
#define rep(i,n) for(int i = 0; i < n; i++)
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)

const int N = 1e5+5;
vector<int> adj[N];
bool vis[N];
int prentArray[N];
bool flag = false;

void bfs(int s) {
    queue<int> q;
    q.push(s);
    vis[s] = true;
    while(!q.empty()) {
        int node = q.front();
        q.pop();
        cout<<node<<" ";
        for(int i: adj[node]) {
            if(vis[i] == true && prentArray[node] != i) {
                flag = true;
            }
            if(!vis[i]) {
                vis[i] = true;
                prentArray[i] = node;
                q.push(i);
            }
        }
    }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,e;
    cin>>n>>e;

    rep(i,e) {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    memset(vis,false,sizeof(vis));
    memset(prentArray,-1,sizeof(prentArray));

    rep(i,e) {
        if(!vis[i]) {
            bfs(i);
        }
    }

    if(flag) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }

    return 0;
}