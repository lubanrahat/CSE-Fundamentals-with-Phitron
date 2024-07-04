#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
#define rep(i,n) for(int i=0;i<n;i++)
#define np nullptr

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    list<int> myList = {1,2,3,4,5,6,7,8,9,10};
    cout<<myList.max_size()<<endl;

    // myList.clear();

    cout<<myList.size()<<endl;
    myList.resize(5);
    myList.resize(10,10000000);

    for(int i:myList) cout<<i<<" ";
    cout<<endl;

    return 0;
}