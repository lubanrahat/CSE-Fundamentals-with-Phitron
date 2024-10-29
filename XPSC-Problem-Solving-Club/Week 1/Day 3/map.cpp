#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    map<int,int> mp;
    mp[10] = 100;
    mp[20] = 200;
    mp[30] = 300;
    mp[40] = 100;
    mp [5] = 12;
    mp[14] = 20;
    mp[50] = 600;
    mp[30] = 40;

    // cout<<mp[10]<<" "<<mp[20]<<" "<<mp[30]<<endl;

    // for(auto [key,value]: mp) {
    //     cout<<key<<" -> "<<value<<endl;
    // }

    // for(auto it: mp) {
    //     int key = it.first,value = it.second;
    //     cout<<key<<" -> "<<value<<endl;
    // }

    // auto it = mp.find(2);

    // cout<<it->second<<endl;

    // if(it != mp.end()) {
    //     cout<<"Key: "<<it->first<<" "<<"Value: "<<it->second<<endl;
    // } else {
    //     cout<<"Not found!"<<endl;
    // }

    // if(mp.find(100) != mp.end()) {
    //     mp.erase(100);
    // } else {
    //     cout<<"Not found!"<<endl;
    //     return 0;
    // }
 
    // for(auto it: mp) {
    //     int key = it.first,value = it.second;
    //     cout<<key<<" -> "<<value<<endl;
    // }

    // cout<<mp.size()<<endl;

    // mp.clear();

    // if(mp.empty()) {
    //     cout<<"YES\n";
    // } else {
    //     cout<<"NO\n";
    // }

    mp[8] = 18;

    for(auto it: mp) {
        int key = it.first,value = it.second;
        cout<<key<<" -> "<<value<<endl;
    }

    // auto it = mp.lower_bound(8);
    auto it = mp.upper_bound(14);

    cout<<it->first<<" "<<it->second<<endl;


    return 0;
}