//
//  main.cpp
//  Same or Not
//
//  Created by Luban Rahat on 7/11/24.
//
#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <array>
#include <set>
#include <map>
#include <utility>
using namespace std;
typedef long long i64;
typedef unsigned long ul;
#define PI 3.1415926535897932384626
#define rep(i,n) for(int i=0;i<n;i++)
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)

bool SameOrNot(stack<int> st,queue<int> q) {
    if(st.size() != q.size()) return false;
    while(!st.empty() && !q.empty()) {
        if(st.top() != q.front()) {
            return false;
        }
        st.pop();
        q.pop();
    }
    return true;
}

int main(int argc, const char * argv[]) {
    
    int n,m;
    cin >> n >> m;
    
    stack<int> st;
    queue<int> q;
    
    rep(i,n) {
        int data;
        cin>>data;
        st.push(data);
    }
    
    rep(i,m) {
        int data;
        cin>>data;
        q.push(data);
    }
    
    if(SameOrNot(st,q)) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    
    return 0;
}
