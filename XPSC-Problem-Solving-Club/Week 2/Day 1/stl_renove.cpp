#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    vector<int> v = {1,2,3,4,3,5,3,3,3,3};
    auto nek = remove(v.begin(),v.end(),3);
    for(auto i: v) {
        cout<<i<<" ";
    }cout<<endl;
    v.erase(nek,v.end());
    for(auto i: v) {
        cout<<i<<" ";
    }

    return 0;
}