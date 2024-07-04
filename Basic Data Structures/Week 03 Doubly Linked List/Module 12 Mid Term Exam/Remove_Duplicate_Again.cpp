#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
#define rep(i,n) for(int i=0;i<n;i++)

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    list<int> myList;
    int data;

    while(true) {
        cin>>data;
        if(data == -1) break;
        myList.push_back(data);
    }

    myList.sort();
    myList.unique();

    for(int i: myList) {
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}