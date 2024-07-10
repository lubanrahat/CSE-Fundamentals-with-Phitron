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

int main() {
    
    stack<int> st;
    stack<int> st1;
    int n;
    cin>>n;
    rep(i,n) {
        int data;
        cin>>data;
        st.push(data);
    }

    

    while(!st.empty()) {
        st1.push(st.top());
        st.pop();
    }

    while(!st1.empty()) {
        st.push(st1.top());
        st1.pop();
    }

    while(!st1.empty()) {
        cout<<st1.top()<<" ";
        st1.pop();
    }
    
    return 0;
}