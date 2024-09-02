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
    int matrix[n][n];
    memset(matrix,0,sizeof(matrix));

    while(e--) {
        int a,b;
        cin>>a>>b;
        matrix[a][b] = 1;
        matrix[b][a] = 1;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    if(matrix[3][4] == 1) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }

    return 0;
}