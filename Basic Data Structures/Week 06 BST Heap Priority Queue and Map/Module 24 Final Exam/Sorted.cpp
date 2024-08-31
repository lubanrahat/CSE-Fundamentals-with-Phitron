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

    

    int tt;
    cin>>tt;

    rep(i,tt) {
        int n;
        cin>>n;
        list<int> S;
        for(int i = 0; i < n; i++) {
            int data;
            cin>>data;
            S.push_back(data);
        }

        set<int> st;
        for(auto i: S) {
            st.insert(i);
        }
        
        tr(it,st) {
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    return 0;
}