#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    vector<int> arr = {1,3,2,6,7,1,2,4,9,4,3,1,0,2,3,6,7,8,10,2,3,4,7,8,0,9,10};
    set<int> st;
    for(auto i: arr) st.insert(i);
    map<int,int> mp;
    for(int i = 0; i <= arr.size(); i++) {
        mp[arr[i]]++;
    } 
    for(auto [key,cnt]:mp) {
        cout<<key<<" -> "<<cnt<<endl;
    }


    if(binary_search(st.begin(),st.end(),10)) {
        cout<<"YES\n";
    } else {
        cout<<"NO\n";
    }

    return 0;
}