#include <iostream>
#include <vector>
using namespace std;

void nonCoprimePartition(int n) {
    // If n < 3, it's impossible to partition as required
    if (n < 3) {
        cout << "No" << endl;
        return;
    }
    
    cout << "Yes" << endl;
    vector<int> subsetA, subsetB;
    
    if (n % 2 == 0) {
        // For even n, split into two equal halves
        for (int i = 1; i <= n / 2; ++i) {
            subsetA.push_back(i);
        }
        for (int i = n / 2 + 1; i <= n; ++i) {
            subsetB.push_back(i);
        }
    } else {
        // For odd n, split with a slight offset
        for (int i = 1; i <= (n - 1) / 2; ++i) {
            subsetA.push_back(i);
        }
        for (int i = (n - 1) / 2 + 1; i <= n; ++i) {
            subsetB.push_back(i);
        }
    }
    
    // Output subset A
    cout << subsetA.size() << " ";
    for (int num : subsetA) {
        cout << num << " ";
    }
    cout << endl;
    
    // Output subset B
    cout << subsetB.size() << " ";
    for (int num : subsetB) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    nonCoprimePartition(n);
    return 0;
}