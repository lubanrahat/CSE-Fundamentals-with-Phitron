#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
#define rep(i,n) for(int i=0;i<n;i++)

class BrowserHistory {
public:
    list<string> addresses;
    list<string>::iterator current;

    void append(string& value) {
        addresses.push_back(value);
    }
    void visit(string& value) {
        auto it = find(addresses.begin(), addresses.end(), value);
        if (it != addresses.end()) {
            current = it;
            cout << *current << endl;
        } else {
            cout << "Not Available" << endl;
        }
    }
    void move_next() {
        if (current != addresses.end() && next(current) != addresses.end()) {
            ++current;
            cout << *current << endl;
        } else {
            cout << "Not Available" << endl;
        }
    }
    void move_prev() {
        if (current != addresses.begin()) {
            --current;
            cout << *current << endl;
        } else {
            cout << "Not Available" << endl;
        }
    }
};
int main() {
    BrowserHistory history;
    string address;
    while (true) {
        cin>>address;
        if (address == "end") break;
        history.append(address);
    }

    int Q;
    cin >> Q;
    string command, address_command;
    rep(i,Q) {
        cin >> command;
        if (command == "visit") {
            cin >> address_command;
            history.visit(address_command);
        } else if (command == "next") {
            history.move_next();
        } else if (command == "prev") {
            history.move_prev();
        }
    }

    return 0;
}