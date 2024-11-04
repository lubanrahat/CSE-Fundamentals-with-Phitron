#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        for(int i = 0; i < n; i++) {
            
           int size;
                string s;
                cin>>size>>s;
                for(int j = 0; j < s.size(); j++) {
                    if(s[j] == 'D') {
                        arr[i]++;
                        if(arr[i] > 9) {
                            arr[i] = 0;
                        }
                    } else if(s[j] == 'U') {
                        arr[i]--;
                        if(arr[i] == -1) arr[i] = 9;
                    }
                }
        }
        for(int i: arr) cout<<i<<" ";
        cout<<endl;
    }

    return 0;
}