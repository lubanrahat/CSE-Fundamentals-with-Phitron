#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int evenSumSubarray(vector<int>&arr) {
    int sum = 0;
    for(int i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }
    if(sum % 2 == 0) {
        return arr.size();
    } else {
        arr.pop_back();
        int sum = 0;
        while(true) {
            for(int i = 0; i < arr.size(); i++) {
                sum += arr[i];
            }
        }
    }
} 

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--) {
        int n;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];

    }

    return 0;
}