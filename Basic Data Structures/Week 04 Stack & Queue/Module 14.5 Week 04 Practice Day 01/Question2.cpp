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
#define rep(i,n) for(int i = 0;i < n;i++)
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)

bool isSame(stack<int> st1,queue<int> q) {
    if(st1.size() != q.size()) 
    {
        return false; 
    }
    else {
        while(!st1.empty()) {
        if(st1.top() != q.front()) {
           return false;
        }
        st1.pop();
        q.pop();
       }
    }
    
    return true;
}

int main() {
    
    stack<int> st;
    queue<int> q;

    int N,M;
    cin >> N;
    while(N--) {
        int data;
        cin>>data;
        st.push(data);
    }
    // int M;
    cin >> M;
    while(M--) {
        int data;
        cin>>data;
        q.push(data);
    }

    if(isSame(st,q)) {
        cout<<"YES\n";
    } else {
        cout<<"NO\n";
    }
    
    return 0;
}