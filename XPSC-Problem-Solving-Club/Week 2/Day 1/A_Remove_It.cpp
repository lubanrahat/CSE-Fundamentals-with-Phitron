#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    arr.erase(remove(arr.begin(), arr.end(), x), arr.end());

    for (auto i : arr) cout << i << " ";
    
    return 0;
}