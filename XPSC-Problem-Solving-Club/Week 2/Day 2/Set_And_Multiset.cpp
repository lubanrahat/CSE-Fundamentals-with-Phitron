#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    // int n;
    // cin>>n;

    // set<int> s;
    // for(int i = 0; i < n; i++) {
    //     int x;cin>>x;
    //     s.insert(x);
    // }

    // for(auto i: s) {
    //     cout<<i<<" ";
    // }
    // for(auto i = s.begin(); i != s.end(); i++) {
    //     cout<<*i<<" ";
    // }
    // cout<<endl;

    // auto it = s.find(9);

    // if(it!=s.end()) {
    //     cout<<"YES\n";
    // } else {
    //     cout<<"NO\n";
    // }

    // if(s.find(9) != s.end())s.erase(9);
    // for(auto it = s.begin(); it != s.end(); it++) {
    //     cout<<*it<<" ";
    // }
    // cout<<endl;

    // cout<<s.count(2)<<endl;
    // cout<<s.size()<<endl;
    // cout<<s.empty()<<endl;

    // if(s.find(9) != s.end())s.erase(9);
    // for(auto it = s.begin(); it != s.end(); it++) {
    //     cout<<*it<<" ";
    // }
    // cout<<endl;

    // int x ;
    // cin>>x;

    // auto it = s.upper_bound(x);

    // if(it == s.end()) {
    //     cout<<"END\n";
    // } else {
    //     cout<<*it<<endl;
    // }


    int n;cin>>n;
    multiset<int> s;
    for(int i = 1; i <= n; i++) {
        int x;
        cin>>n;
        s.insert(x);
    }

    for(auto num: s) {
        cout<<num<<" ";
    }
    cout<<endl;

    return 0;
}