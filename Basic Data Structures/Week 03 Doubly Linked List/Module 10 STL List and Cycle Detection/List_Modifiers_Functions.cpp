#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
#define rep(i,n) for(int i=0;i<n;i++)
#define np nullptr

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    list<int> myList = {10,20,30,40,50};

    // myList.push_back(100);
    // myList.push_front(200);

    // myList.pop_back();
    // myList.pop_front();

    // myList.insert(next(myList.begin(),0),1000);
    // myList.erase(next(myList.begin(),0));
    myList.insert(next(myList.begin(),3),{100,200,300,400,500,600,700000});

    for(int i:myList) {
        cout<<i<<" ";
    }
    cout<<endl;

    auto it = find(myList.begin(),myList.end(),500);
    if(it != myList.end()) {
        cout<<"found\n";
    }else {
        cout<<"Not found\n";
    }

    return 0;
}