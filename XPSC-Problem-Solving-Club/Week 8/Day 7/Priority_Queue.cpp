#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(5);
    pq.push(7);
    pq.push(3);
    pq.push(2);
    pq.push(1);
    pq.push(5);
    pq.push(8);
    pq.push(3);
    pq.push(4);

    set<int> st;

    while(!pq.empty()) {
        cout<<pq.top()<<" ";
        st.insert(pq.top());
        pq.pop();
    }
    cout<<endl;

    for(auto i: st) {
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}