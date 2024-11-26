#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(),(x).end()

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);

    int t; cin >> t;
    while(t--){
        long n;cin >> n;
        if(n % 2){std::cout << "NO" << endl; continue;}
        cout << "YES" << std::endl;
        for(long p = 0; 2 * p < n; p++){cout << ((p % 2) ? "AA" : "BB");}
        cout << std::endl;
    }

    return 0;
}