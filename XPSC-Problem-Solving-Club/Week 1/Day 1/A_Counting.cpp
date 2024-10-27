#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    int a,b;
    cin>>a>>b;

    if(a > b) {
        printf("0\n");
    } else {
        int cnt = 0;
        for(int i = a; i <= b; i++) {
            if(a < b && b > a) {
                cnt++;
            }
        }
        printf("%d\n",cnt);
    }

    return 0;
}