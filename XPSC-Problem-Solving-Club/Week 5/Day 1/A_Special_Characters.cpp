#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(),(x).end()

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);

    int t;
    cin>>t;
    while(t--) {
        int a;
        cin>>a;
        if(a % 2 != 0) {
            cout<<"NO\n";
            return 0;
        }
        cout<<"YES\n";
        for(int i = 0; i < a/2; i++) {
            if(i % 2 == 0) {
                cout<<"BB";
            } else {
                cout<<"AA";
            }
        }
        cout<<endl;
    }

    return 0;
}