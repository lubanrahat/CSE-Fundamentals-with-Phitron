#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef unsigned long long u64;
typedef unsigned u32;
#define PI 3.1415926535897932384626
#define rep(i,n) for(int i = 0; i < n; i++)
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)

void insertHeap(vector<int>&v,int x) {
    v.push_back(x);
    int currIndex = v.size()-1;
    while(currIndex != 0) {
        int parentIndex = (currIndex-1) / 2;
        if(v[parentIndex] > v[currIndex]) {
            swap(v[parentIndex],v[currIndex]);
        } else {
            break;
        }
        currIndex = parentIndex;
    }
}

void deleteHead(vector<int>& v) {
    v[0] = v[v.size()-1];
    v.pop_back();
    int curr = 0;
    while(true) {
        int leftIndex = curr*2+1;
        int rightIndex = curr*2+2;
        int lastIndex = v.size()-1;
        if(v[leftIndex] > v[rightIndex] && v[leftIndex] > v[curr]) {
            swap(v[leftIndex],v[curr]);
            curr = leftIndex;
        }
    }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<int> v;
    rep(i,n) {
        int x;
        cin>>x;
        insertHeap(v,x);
    }

    rep(i,n) cout<<v[i]<<" ";
    cout<<endl;

    return 0;
}