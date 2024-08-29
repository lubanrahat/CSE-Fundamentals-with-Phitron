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

    priority_queue<int,vector<int>,greater<int>> pq;

    while(true) {
        int cmd;
        cin>>cmd;
        if(cmd = 0) {
            int data;
            cin>>data;
            pq.push(data);
        } else if(cmd == 1) {
            pq.pop();
        } else if(cmd == 2) {
            cout<<pq.top()<<" ";
        }
        else if(cmd == 3) {
            break;
        }
    }

    return 0;
}