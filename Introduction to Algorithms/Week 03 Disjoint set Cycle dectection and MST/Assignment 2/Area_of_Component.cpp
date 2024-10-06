#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef unsigned long long u64;
typedef unsigned u32;
#define PI 3.1415926535897932384626
#define rep(i,n) for(int i = 0; i < n; i++)
#define tr(it,a) for(auto it = a.begin(); it != a.end(); it++)

bool vis[1005][1005];
int row,col;
char ar[1005][1005];

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int i, int j) {
    if (i < 0 || i >= row || j < 0 || j >= col || ar[i][j] == '-') {
        return false;
    }
    return true;
}

int bfs(int si, int sj) {
    queue<pair<int,int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    int cnt = 1;
    while (!q.empty()) {
        pair<int, int> par = q.front();
        int a = par.first;
        int b = par.second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if (valid(ci, cj) == true && vis[ci][cj] == false) {
                q.push({ci, cj});
                vis[ci][cj] = true;
                cnt++;
            }
        }
    }
    return cnt;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>row>>col;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) cin>>ar[i][j];
    }
    memset(vis, false,sizeof(vis));
    vector<int> ans;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (vis[i][j] == false && valid(i, j) == true) ans.push_back(bfs(i, j));
        }
    }
    sort(ans.begin(), ans.end());
    if (ans.empty())  cout << "-1" << endl;
    else cout<<ans.front()<<endl;

    return 0;
}
