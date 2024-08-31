#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef unsigned long long u64;
typedef unsigned u32;
#define PI 3.1415926535897932384626
#define rep(i,n) for(int i = 0; i < n; i++)
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)

class cmp {
public:
    bool operator()(pair<string,int>&a,pair<string,int>&b) {
        if(a.first == b.first) {
            return a.second < b.second;
        }
        return a.first > b.first;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    list<pair<string, int>> a;

    rep(i, n) {
        string s;
        int data;
        cin >> s >> data;
        a.push_back({s, data});
    }
    priority_queue<pair<string,int>,vector<pair<string,int>>,cmp> pr;

    for(auto i: a) {
        pr.push(i);
    }
    
    while(!pr.empty()) {
        cout<<pr.top().first<<" "<<pr.top().second<<endl;
        pr.pop();
    }

    return 0;
}