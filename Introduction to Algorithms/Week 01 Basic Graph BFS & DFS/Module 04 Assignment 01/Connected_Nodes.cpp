#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef unsigned long long u64;
typedef unsigned u32;
#define PI 3.1415926535897932384626
#define rep(i,n) for(int i = 0; i < n; i++)
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)

int main()
{
    int n,e;
    cin>>n>> e;
    vector<int> v[1005];
    while (e--) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int tt;
    cin>>tt;
    rep(i,tt) {
        priority_queue<int> q;
        int num;
        cin>>num;
        if (v[num].empty())  cout<<-1<<endl;
        else
        {
            for (int val : v[num]) q.push(val);
            while(!q.empty()) {
                cout<<q.top()<<" ";
                q.pop();
            }
            cout<<endl;
        }
    }
    return 0;
}