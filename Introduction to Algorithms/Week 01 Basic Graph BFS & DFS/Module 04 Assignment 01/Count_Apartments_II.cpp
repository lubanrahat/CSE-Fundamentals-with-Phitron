#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef unsigned long long u64;
typedef unsigned u32;
#define PI 3.1415926535897932384626
#define rep(i,n) for(int i = 0; i < n; i++)
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)

bool visited[1005][1005];
int row, col;
char arr[1005][1005];
vector<pair<int, int>> v = {{0,1}, {0,-1}, {-1,0}, {1, 0}};

bool isValid(int i, int j) {
    if (i < 0 || i >= row || j < 0 || j >= col || arr[i][j] == '#') return false;
    return true;
}

int bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visited[si][sj] = true;
    int cnt = 1;
    while (!q.empty()) {
        pair<int, int> par = q.front();
        int a = par.first;
        int b = par.second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int ci = a + v[i].first;
            int cj = b + v[i].second;
            if (isValid(ci, cj) == true && visited[ci][cj] == false) {
                q.push({ci, cj});
                visited[ci][cj] = true;
                cnt++;
            }
        }
    }
    return cnt;
}

int main()
{
    cin>>row>>col;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) cin >> arr[i][j];
    }
    memset(visited, false, sizeof(visited));
    vector<int> ans;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (visited[i][j] == false && isValid(i, j) == true) {
                ans.push_back(bfs(i, j));
            }
        }
    }
    sort(ans.begin(), ans.end());
    if (ans.empty()) cout<<"0"<<endl;
    else {
        for (int val : ans) cout<<val<<" ";
        cout<<endl<<endl;
    }

    return 0;
}