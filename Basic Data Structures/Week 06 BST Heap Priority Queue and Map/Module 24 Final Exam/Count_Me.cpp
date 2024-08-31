#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef unsigned long long u64;
typedef unsigned u32;
#define PI 3.1415926535897932384626
#define rep(i,n) for(int i = 0; i < n; i++)
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    cin.ignore();

    rep(i,n) {
        string str;
        getline(cin,str);
        map<string,int> wordCount;
        stringstream ss(str);
        int maxCount = 0;
        string word,result;
        while(ss >> word) {
            wordCount[word]++;
            if(wordCount[word] > maxCount) {
                maxCount = wordCount[word];
                result = word;
            }
        }

        cout<<result<<" "<<maxCount<<endl;
    }

    return 0;
}