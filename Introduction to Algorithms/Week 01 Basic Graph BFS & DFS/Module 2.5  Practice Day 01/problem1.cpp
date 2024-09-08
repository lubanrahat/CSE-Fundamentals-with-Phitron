#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef unsigned long long u64;
typedef unsigned u32;
#define PI 3.1415926535897932384626
#define rep(i,n) for(int i = 0; i < n; i++)
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,e;
    cin>>n>>e;
    vector<vector<int>> adj(n);
    int a,b;
    rep(i,e) {
        cin>>a>>b;
        if (a < 0 || a >= n || b < 0 || b >= n) {
            cout<< "-1"<<endl;
            return 1;
        }
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int tt;
    cin>>tt;

    rep(i,tt) {
        int start,des;
        cin>>start>>des;
        if (start < 0 || start >= n || des < 0 || des >= n) {
            cout << "-1" << endl;
            continue;
        }
        vector<bool> visited(n,false);
        bool flag = false;
        queue<pair<int,int>> q;
        visited[start] = true;
        q.push({start,0});
        while(!q.empty()) {
            int node = q.front().first;
            int level = q.front().second;
            q.pop();
            if(node == des) {
                cout<<level<<endl;
                flag = true;
                break;
            }
            for(int i: adj[node]) {
                if(visited[i] == false) {
                    visited[i] = true;
                    q.push({i,level+1});
                }
            }
        }
        if(flag == false) cout<<"-1"<<endl;
    }


    return 0;
}