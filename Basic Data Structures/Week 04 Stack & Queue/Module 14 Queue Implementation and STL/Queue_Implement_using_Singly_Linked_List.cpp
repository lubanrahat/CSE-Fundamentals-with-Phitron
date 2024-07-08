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

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class MyQueue {
    Node* head;
    Node* tail;
    int sz = 0;
public:
    MyQueue() {
        this->head = NULL;
        this->tail = NULL;
    }

    void push(int data) {
        sz++;
        Node* newNode = new Node(data);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop(void) {
        sz--;
        Node* deleteNode = head;
        head = head->next;
        if(head == NULL) {
            tail = NULL;
        }
    }
    int front() {
        return head->data;
    }

    int size(void) {
        return sz;
    }
    bool empty(void) {
        if(sz == 0) return true;
        return false;
    }

};

int main() {
    
    MyQueue q;
    
    int tt;
    cin>>tt;

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