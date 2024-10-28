#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ios::sync_with_stdio(false),cin.tie(nullptr);

    string s;
    cin>>s;

    set<char> letters;
    for(char i = 'a'; i <= 'z'; i++) {
        letters.insert(i);
    }
    for(char i: s) {
        letters.erase(i);
    }

    if(!letters.empty()) {
        cout<<*letters.begin()<<endl;
    } else {
        cout<<"None"<<endl;
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    char ans = '0';
    for(int i=0;i<26;i++)
    {
        char c = i+97;
        auto it = find(s.begin(),s.end(),c);
        if(it == s.end())
        {
            ans = c;
            break;
        }
    }
    if(ans != '0') cout<<ans<<endl;
    else cout<<"None"<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    string ss="abcdefghijklmnopqrstuvwxyz";
    sort(s.begin(),s.end());
    for(int i=0;i<ss.size();i++)
    {
        for(int j=0;j<s.size();j++)
        {
            if(ss[i]==s[j])
            {
                ss[i]='$';
            }
        }
    }
    string ans;
    for(int i=0;i<26;i++)
    {
        if(ss[i]>='a' && ss[i]<='z')
        {
            ans.push_back(ss[i]);
        }
    }
    if(ans.size()==0)
    {
        cout<<"None"<<endl;
    }
    else
    {
        cout<<ans.front()<<endl;
    }
    return 0;
}
