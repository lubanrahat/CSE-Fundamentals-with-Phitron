#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    list<int> myList;
    while(t--)
    {
        int pos,val;
        cin>>pos>>val;
        if(pos==0) {
            myList.push_front(val);
        }
        else if(pos==1) {
            myList.push_back(val);
        }
        else if(pos==2) {
            if(val >= myList.size()) {
                
            }
            else {
                myList.erase(next(myList.begin(),val));
            }
        }
        cout<<"L -> ";
        for(int i:myList) {
            cout<<i<<" ";
        }
        list<int> myList2 = myList;
        reverse(myList2.begin(),myList2.end());
        cout<<endl;
        cout<<"R -> ";
        for(int i:myList2) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}