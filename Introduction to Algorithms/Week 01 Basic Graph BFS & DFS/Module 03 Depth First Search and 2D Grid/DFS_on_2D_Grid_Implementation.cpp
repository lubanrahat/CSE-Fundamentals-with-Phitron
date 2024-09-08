#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef unsigned long long u64;
typedef unsigned u32;
#define PI 3.1415926535897932384626
#define rep(i,n) for(int i = 0; i < n; i++)
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)

char arr[1001][1001];
bool visited[1001];

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin>>arr[i][j];
        }
    }

    return 0;
}