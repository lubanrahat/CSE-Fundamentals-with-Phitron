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
    Student(string name,int roll,int marks) {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp {
public:
    bool operator()(Student a,Student b) {
        if(a.marks < b.marks) {
            return true;
        } else if(a.marks > b.marks) {
            return false;
        } else {
            if(a.roll > b.roll) {
                return true;
            } else {
                return false;
            }
        }
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

    int tt;
    cin>>tt;

    rep(i,tt) {
        int cmd;
        cin>>cmd;
        if(cmd == 0) {
            string name;
            int roll,marks;
            cin>>name>>roll>>marks;
            Student obj(name,roll,marks);
            pq.push(obj);
            cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        } else if(cmd == 1) {
            if(pq.empty()) {
                cout<<"Empty"<<endl;
            } else {
                cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            }
        } else if(cmd == 2) {
            if(!pq.empty()) pq.pop();
            if(pq.empty()) {
                cout<<"Empty"<<endl;
            } else {
                cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            }
        }
    }

    return 0;
}