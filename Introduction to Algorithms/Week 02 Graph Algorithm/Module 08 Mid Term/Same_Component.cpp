#include <bits/stdc++.h>
using namespace std;

int n, m;
char a[10005][10005];
bool visited[10005][10005];
vector<pair<int, int>> dir = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool flag = false;

bool isValid(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m && a[i][j] == '.' && !visited[i][j];
}

void BFS(int si, int sj, int di, int dj) {
    queue<pair<int, int>> q;
    q.push({si, sj});
    visited[si][sj] = true;

    while (!q.empty()) {
        auto prent = q.front();
        q.pop();

        if (prent.first == di && prent.second == dj) {
            flag = true;
            return;
        }

        for (int i = 0; i < 4; i++) {
            int ci = prent.first + dir[i].first;
            int cj = prent.second + dir[i].second;

            if (isValid(ci, cj)) {
                visited[ci][cj] = true;
                q.push({ci, cj});
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            visited[i][j] = false;
        }
    }

    BFS(si, sj, di, dj);

    if (flag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}