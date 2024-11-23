#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(),(x).end()

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);

    int t;cin>>t;

    while(t--) {
         int n, s; 
        cin >> n >> s;
        vector<int> arr(n);
        int total_sum = 0;

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            total_sum += arr[i];
        }
        if (total_sum < s) {
            cout << -1 << endl;
            continue;
        }
        if (total_sum == s) {
            cout << 0 << endl;
            continue;
        }
        int start = 0, current_sum = 0, max_length = 0;
        for (int end = 0; end < n; ++end) {
            current_sum += arr[end];
            
            while (current_sum > s) {
                current_sum -= arr[start];
                start++;
            }
            if (current_sum == s) {
                max_length = max(max_length, end - start + 1);
            }
        }
        cout << (n - max_length) << endl;
    }

    return 0;
}