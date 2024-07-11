//
//  main.cpp
//  Same or Not II
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

class Stack {
    list<int> st;
public:
    void push(int data) {
        st.push_back(data);
    }
    void pop(void) {
        st.pop_back();
    }
    int top(void) {
        return st.back();
    }
    ul size(void) {
        return st.size();
    }
    bool empty(void) {
        if(st.empty()) return true;
        return false;
    }
};

class Queue {
    list<int> q;
public:
    void push(int data) {
        q.push_back(data);
    }
    void pop(void) {
        q.pop_front();
    }
    int front(void) {
        return q.front();
    }
    ul size(void) {
        return q.size();
    }
    bool empty(void) {
        if(q.empty()) return true;
        return false;
    }
};

bool SameOrNot2(Stack st,Queue q) {
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
    
    Stack st;
    Queue q;
    
    int n,m;
    cin>>n>>m;
    
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
       
    if(SameOrNot2(st,q)) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    
    return 0;
}
