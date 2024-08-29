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

    map<char,int> mp;
    mp.insert({'A',100});
    mp.insert({'B',200});
    mp.insert({'C',300});
    mp.insert({'D',400});
    mp.insert({'E',500});

    // tr(it,mp) {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }

    if(mp.count('A')) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }

    return 0;
}