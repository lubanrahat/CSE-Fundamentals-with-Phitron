#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
#define rep(i,n) for(int i=0;i<n;i++)
#define np nullptr

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    list<int> list1 = {1,2,3,4,5,6,7,8,9,10};

    list<int> myList(list1);

    for(auto it = myList.begin(); it != myList.end(); it++) {
        cout<<*it<<endl;
    }

    for(int i:myList) cout<<i<<" ";
    cout<<endl;

    return 0;
}