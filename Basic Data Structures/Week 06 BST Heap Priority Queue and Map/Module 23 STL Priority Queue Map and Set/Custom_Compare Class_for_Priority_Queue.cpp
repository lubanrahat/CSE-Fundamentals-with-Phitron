#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef unsigned long long u64;
typedef unsigned u32;
#define PI 3.1415926535897932384626
#define rep(i,n) for(int i = 0; i < n; i++)
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)

class Student {
public:
    string name;
    int roll;
    int marks;
    Student(string name,int rool,int marks) {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp {
public:
    bool operator()(Student a,Student b) {
        if(a.marks < b.marks) return true;
        return false;
    }
};

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    priority_queue<Student,vector<Student>,cmp> pq;

    rep(i,n) {
        string name;
        int roll,marks;
        cin>>name>>roll>>marks;
        Student obj(name,roll,marks);
        pq.push(obj);
    }

    while(!pq.empty()) {
        cout<<pq.top().name<<endl;
        cout<<pq.top().roll<<endl;
        cout<<pq.top().marks<<endl;
        pq.pop();
    }

    return 0;
}