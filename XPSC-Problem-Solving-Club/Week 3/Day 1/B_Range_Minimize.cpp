#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int a=v[n-1]-v[2], b=v[n-2]-v[1], c=v[n-3]-v[0];
        int mn=min(min(a,b),c);
        cout<<mn<<endl;
    }

    return 0;
}