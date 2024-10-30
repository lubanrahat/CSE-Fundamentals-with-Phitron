#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(string& x, string& y) 
{
    stack<char> lowerSt, upperSt;

    for (int i = x.size() - 1; i >= 0; i--)
    {
        if (x[i] == 'b') {
            lowerSt.push(x[i]);
        }
        else if (x[i] == 'B') {
            upperSt.push(x[i]);
        } 
        else {
            if(x[i] >= 'a' && x[i] <= 'z') {
                if (!lowerSt.empty()) {
                    lowerSt.pop();
                } else {
                    y += x[i];
                }
            } 
            else {
                if (!upperSt.empty()) {
                    upperSt.pop();
                } else {
                    y += x[i];
                }
            }
        }
    }
    reverse(y.begin(), y.end());
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--) {
        string x, y;
        cin>>x;
        solve(x,y);
        cout <<y<< "\n";
    }
    return 0;
}