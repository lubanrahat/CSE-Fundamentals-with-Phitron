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

    int n;
    cin>>n;
    priority_queue<int,vector<int>,greater<int>> nums;
    rep(i,n) {
        int data;
        cin>>data;
        nums.push(data);
    }

    int tt;
    cin>>tt;

    rep(i,tt) {
        int cmd,x;
        cin>>cmd;
        
       if(cmd == 0) {
            cin>>x;
            nums.push(x);
            cout<<nums.top()<<endl;
        } else if(cmd == 1) {
            if(nums.empty()) {
                cout<<"Empty"<<endl;
            } else {
                cout<<nums.top()<<endl;
            }
            
        } else if(cmd == 2) {
            if(!nums.empty()) {
                nums.pop();
            } 
            if(nums.empty()) {
                cout<<"Empty"<<endl;
            } else {
                cout<<nums.top()<<endl;
            }
        }
    }

    return 0;
}