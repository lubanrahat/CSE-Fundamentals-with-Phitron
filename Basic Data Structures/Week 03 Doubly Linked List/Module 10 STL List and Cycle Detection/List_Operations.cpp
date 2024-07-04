#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
#define rep(i,n) for(int i=0;i<n;i++)
#define np nullptr

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    list<int> myList = {10,20,11,30,50,99,10,40,67,10,};
    // myList.remove(10);
    myList.sort(/*greater<int>()*/);

    myList.unique();

    for(int i:myList) {
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}