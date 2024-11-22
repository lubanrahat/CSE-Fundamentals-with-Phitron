#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(),(x).end()

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);

    int n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }

    deque<int> maxDeque,minDeque;
    ll count = 0;
    int r=0;

    for(int l=0;l<n;l++) {
        while(r<n) {
            while(!maxDeque.empty()&&a[maxDeque.back()]<=a[r]) {
                maxDeque.pop_back();
            }
            maxDeque.push_back(r);
            while(!minDeque.empty()&&a[minDeque.back()]>=a[r]) {
                minDeque.pop_back();
            }
            minDeque.push_back(r);
            ll maxElement=a[maxDeque.front()];
            ll minElement=a[minDeque.front()];
            if(maxElement-minElement>k) {
                break;
            }

            r++;
        }
        count += (r-l);
        if(!maxDeque.empty()&&maxDeque.front()==l) {
            maxDeque.pop_front();
        }
        if(!minDeque.empty()&&minDeque.front()==l) {
            minDeque.pop_front();
        }
    }
    cout<<count<<endl;

    return 0;
}