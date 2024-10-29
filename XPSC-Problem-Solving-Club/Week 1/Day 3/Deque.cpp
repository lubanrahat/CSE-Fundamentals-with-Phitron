#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    int n;cin>>n;
    deque<int> dq;
    for(int i = 0; i < n; i++) {
        // int x;cin>>x;
        // dq.push_back(x);
        cin>>dq[i];
    }

    // dq.push_front(10);
    // dq.pop_front();

    for(auto value: dq) {
        cout<<value<<" ";
    }
    cout<<endl;

    return 0;
}