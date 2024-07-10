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

class Node {
public:
    Node* prev;
    int data;
    Node* next;
    Node(int data) {
        this->prev = NULL;
        this->data = data;
        this->next = NULL;
    }
};

class Stack {
    Node* head;
    Node* tail;
    int sz = 0;
public:
    Stack() {
        this->head = NULL;
        this->tail = NULL;
    }

    void push(int data) {
        ++sz;
        Node* newNode = new Node(data);
        if(head == NULL) {
            this->head = this->tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
    void pop(void) {
        --sz;
        Node* deleteNode = tail;
        tail = tail->prev;
        if(tail == NULL) {
            head = NULL;
        } else {
            tail->next = NULL;
        }
    }
    int top(void) {
        return tail->data;
    }
    int size(void) {
        return sz;
    }
    bool empty(void) {
        if(sz == 0) return true;
        return false;
    }
};

bool isSame(Stack st1,Stack st2) {
    if(st1.size() != st2.size()) return false;
    if(st1.top() != st2.top()) {
        return false;
    }
    else {
        st1.pop();
        st2.pop();
    }
    return true;
}

int main() {

    Stack st1;
    Stack st2;
    int t1,t2;
    cin>>t1;
    while(t1--) {
        int data;
        cin>>data;
        st1.push(data);
    }
    cin>>t2;
    while(t2--) {
        int data;
        cin>>data;
        st2.push(data);
    }

    if(isSame(st1,st2)) {
        cout<<"YES\n"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    
    
    return 0;
}