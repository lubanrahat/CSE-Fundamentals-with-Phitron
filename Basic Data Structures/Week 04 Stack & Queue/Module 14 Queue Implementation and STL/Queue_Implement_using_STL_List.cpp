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

class MyQueue {
    list<int> q;
public:
    void push(int data) {
        q.push_back(data);
    }
    void pop(void) {
        q.pop_front();
    }
    int front (void) {
       return q.front();
    }

    int size(void) {
        return q.size();
    }
    bool empty(void) {
        if(q.empty()) return true;
        return false;
    }
};

int main() {
    
    MyQueue q;

    int tt;
    while(tt--) {
        int n;
        cin>>n;
        q.push(n);
    }

    while(!q.empty()) {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    
    return 0;
}