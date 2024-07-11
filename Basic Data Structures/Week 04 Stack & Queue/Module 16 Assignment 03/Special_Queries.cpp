//
//  main.cpp
//  Special Queries
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

int main(int argc, const char * argv[]) {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int Q;
    cin>>Q;
    queue<string> q;
    
    rep(i,Q) {
        int cmd;
        cin>>cmd;
        
        if(cmd == 0) {
            string name;
            cin>>name;
            q.push(name);
        } else if(cmd == 1) {
            if(!q.empty()) {
                cout<<q.front()<<endl;
                q.pop();
            } else {
                cout<<"Invalid"<<endl;
            }
        }
    }
    
    return 0;
}
