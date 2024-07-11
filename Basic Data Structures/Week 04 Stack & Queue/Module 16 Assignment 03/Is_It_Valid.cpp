//
//  main.cpp
//  Is It Valid
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

bool isItValid(string str) {
    stack<char> st;
    for(char i: str) {
        if(st.empty()) {
            st.push(i);
        } else {
            if(st.top() == '0' && i == '1') {
                st.pop();
            } else if(st.top() == '1' && i == '0') {
                st.pop();
            } else {
                st.push(i);
            }
        }
    }
    return st.empty();
}

int main(int argc, const char * argv[]) {
    
    int tt;
    cin>>tt;
    
    rep(i,tt) {
        string str;
        cin>>str;
        if(isItValid(str)) {
            cout<<"YES"<<endl;
        }else {
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}
