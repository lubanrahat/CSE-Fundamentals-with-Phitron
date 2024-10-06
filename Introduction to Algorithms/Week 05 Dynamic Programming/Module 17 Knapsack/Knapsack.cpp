#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef unsigned long long u64;
typedef unsigned u32;
#define PI 3.1415926535897932384626
#define rep(i,n) for(int i = 0; i < n; i++)
#define tr(it,a) for(auto it = a.begin(); it != a.end(); it++)

int Knapsack(int *weght,int *value,int n,int w) {
    if(n < 0 || w == 0) return 0;
    if(weght[n] <= w) {
        int op1 = Knapsack(weght,value,n-1,w-weght[n]) + value[n];
        int op2 = Knapsack(weght,value,n-1,w);
        return max(op1,op2);
    } else {
        int op2 = Knapsack(weght,value,n-1,w);
        return op2;
    }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    int weght[n],value[n];

    for(int i=0;i<n;i++) cin>>weght[i];
    for(int i=0;i<n;i++) cin>>value[i];

    int w;
    cin>>w;

    cout<<Knapsack(weght,value,n,w)<<endl;

    return 0;
}