#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<string,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    fast;
//    optimize();
    string u = "AGTC";
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char, int > mp;
    if(n % 4)
    {
        cout<<"===";
        return 0;
    }
    else
    {
        int c = n / 4, cnt = 0;
        rep(i,n) mp[s[i]]++;
        rep(j, 4)
        {
            if(mp[u[j]] == c ) continue;
            else if(mp[u[j]] > c)
            {
                cout<<"===";
                return 0;
            }
            else cnt += (c - mp[u[j]]);
        }
        if(mp['?'] == cnt)
        {
            rep(i,n)
            {
                if(s[i] == '?')
                {
                    rep(j, 4)
                    {
                        if(mp[u[j]] < c)
                        {
                            s[i] = u[j];
                            mp[u[j]]++;
                            break;
                        }
                    }
                }
            }
            cout<<s;
        }
        else cout<<"===";
    }
    return 0;
}
