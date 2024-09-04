#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef unsigned long long u64;
typedef unsigned u32;
#define PI 3.1415926535897932384626
#define rep(i,n) for(int i = 0; i < n; i++)
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)

void bfs(const vector<vector<int>> &arr,int start) {
    int n = arr.size();
    vector<bool> visited(n,false);
    queue<int> q;
    visited[start] = true;
    q.push(start);
    while(!q.empty()) {
        int node = q.front();
        q.pop();
        cout<<node<<"\n";
        for(int x: arr[node]) {
            if(!visited[x]) {
                visited[x] = true;
                q.push(x);
            }
        }
    }

}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,e;
    cin>>n>>e;
    vector<vector<int>> arr(n);
    rep(i,n) {
        int a,b;
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    int start;
    cin>>start;

    bfs(arr,start);

    return 0;
}