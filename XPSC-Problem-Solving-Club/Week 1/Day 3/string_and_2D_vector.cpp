#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    // int n;
    // cin>>n;
    // string s;
    // // cin>>s;

    // for(int i = 0; i < n; i++) {
    //     char ch;
    //     cin>>ch;
    //     s.push_back(ch);
    // }
    // s.pop_back();
    // cout<<s<<'\n';
    // cout<<s.front()<<" "<<s.back()<<'\n';
    // s.clear();
    // if(s.empty()) {
    //     cout<<"YES\n";
    // } else {
    //     cout<<"NO\n";
    // }

    // string s;
    // cin>>s;

    // cout<<s.substr(0,3)<<"\n";
    // cout<<s.substr(2)<<endl;

    int n,m;
    cin>>n>>m;

    vector<vector<int>> v(n,vector<int>(m,-1));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}