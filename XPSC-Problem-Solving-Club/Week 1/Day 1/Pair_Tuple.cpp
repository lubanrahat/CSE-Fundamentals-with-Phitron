#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    // pair<string,int> student = make_pair("rohim",10);
    // pair<string,int> student = {"karim",20};
    // auto [name,roll] = student;

    // cout<<student.first<<" "<<student.second<<endl;
    // cout<<name<<" "<<roll<<endl;


    // int n;
    // cin>>n;
    // pair<string,int> student[n];

    // for(int i = 0; i < n; i++) {
    //     // cin>>student[i].first>>student[i].second;
    // }
    // for(int i=0;i<n;i++) {
    //     cout<<student[i].first<<" "<<student[i].second<<'\n';
    // }
    // for(auto i: student) {
    //     cout<<i.first<<" "<<i.second<<'\n';
    // }
    // for(auto [name,roll]: student) {
    //     cout<<name<<" "<<roll<<'\n';
    // }

    // tuple<string,int,char> t = make_tuple("rahim",10,'A');

    // cout<<get<0>(t)<<" "<<get<1>(t)<<" "<<get<2>(t)<<endl;
    // auto [name,roll,section] = t;
    // cout<<name<<" "<<roll<<" "<<section<<endl;

    pair<string,pair<int,char>> student = {"rahim",{5,'A'}};
    cout<<student.first<<" "<<student.second.first<<" "<<student.second.second<<endl;



    return 0;
}