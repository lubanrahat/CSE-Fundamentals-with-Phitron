#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll N = 1e18;

int main()
{
    ll n, e;
    cin >> n >> e;
    ll adj[n+5][n+5];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            adj[i][j] = N;
            if (i == j)
                adj[i][j] = 0;
        }
    }
    while (e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        adj[a][b] = min(adj[a][b],c);
    }
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (adj[i][k] + adj[k][j] < adj[i][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }
    
    int t;
    cin>>t;

    while(t--) {
        int x,y;
        cin>>x>>y;

        if(adj[x][y] == N) {
            cout<<"-1"<<endl;
        } else {
            cout<<adj[x][y]<<endl;
        }
    }
    return 0;
}