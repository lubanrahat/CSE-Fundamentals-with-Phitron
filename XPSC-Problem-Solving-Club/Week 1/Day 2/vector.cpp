#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    // int n;cin>>n;
    // vector<int> v(n);
    // for(int i = 0; i < n; i++) {
    //     cin>>v[i];
    // }
    // v.pop_back();
    // for(int i = 0; i < n; i++) {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

    // cout<<v.back()<<endl;
    // cout<<v.front()<<endl;

    // // arr.clear();

    // cout<<v.size()<<endl;

    // cout<<*v.begin()<<endl;
    // cout<<*v.end()<<endl;

    // v.clear();

    // if(v.empty()) {
    //     cout<<"YES\n";
    // } else {
    //     cout<<"NO\n";
    // }

    // int n;cin>>n;
    // vector<int> v(n,-1);

    // for(int i = 0; i < n; i++) {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

    // int n;cin>>n;
    // vector<int> v;
    // v.assign(10,-1);

    // for(int i = 0; i < 10; i++) {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

    // int n;cin>>n;
    // vector<int> v(n);

    // v.resize(5);

    // for(int i = 0; i < n; i++) {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

    int n;cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin>>v[i];
    }

    // auto it = v.begin();
    // cout<<*it<<endl;
    // auto it = v.end()-1;
    // cout<<*it<<endl;

    // for(auto it = v.begin(); it != v.end(); it++) {
    //     cout<<*it<<" ";
    // }
    // cout<<endl;

    reverse(v.begin()+1,v.end()-1);
    // sort(v.begin()+1,v.end()-1);
    // sort(v.rbegin(),v.rend());
    sort(v.begin(),v.end(),greater<int>());

    for(int i = 0; i < v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    auto mi = min_element(v.begin(),v.end());
    auto mx = max_element(v.begin(),v.end());
    cout<<*mi<<" "<<*mx<<endl;

    int maxElementPosition = mx - v.begin();
    cout<<maxElementPosition<<endl;

    int minElementPosition = mi - v.begin();
    cout<<minElementPosition<<endl;


    return 0;
}