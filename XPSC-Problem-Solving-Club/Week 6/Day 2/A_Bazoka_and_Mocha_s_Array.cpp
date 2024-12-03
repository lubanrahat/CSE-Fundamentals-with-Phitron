#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool solve(vector<int>&a) {
    vector<int> temp = a;
    sort(temp.begin(),temp.end());
    int n = a.size();
    for(int i=0;i<n;i++) {
        bool match = true;
        for(int j=0;j<n;j++) {
            if(a[(i+j)%n] != temp[j]) {
                match = false;
                break;
            }
        } 
        if(match) return true;
    }
    return false;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        if(solve(a)) {
            cout<<"Yes"<<endl;
        } else {
            cout<<"No"<<endl;
        }
    }

    return 0;
}