#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int t, n;
vector<long long> a;

void solve() {
    priority_queue<long long> pq;
    long long sum = 0;

    for (long long num : a) {
        pq.push(num); 
        if (num == 0) {
            sum += pq.top(); 
            pq.pop();         
        }
    }

    cout << sum << endl; 
}

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    cin >> t;

    while(t--) {
        cin >> n;
        a.resize(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i]; 
        }

        solve(); 
    }

    return 0;
}