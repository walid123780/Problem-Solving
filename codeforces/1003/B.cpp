
// Author: Md .Ashik Billah Walid

#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<int,int>
#define rep(i,n)       for(ll i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define f              first
#define s              second
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define str_unique(s)  s.resize(unique(s.begin(), s.end()) - s.begin());
#define str_unique1    s.erase(unique(s.begin(),s.end()),s.end());
#define int_length(x)  to_string(x).length()
#define all(x)         x.begin(), x.end()


void solve()
{
    int n, m, k, lm = 0;
    cin>>n>>m>>k;
    string s = "";
    lm = k;
    k--;
    int first = 0, i = 0;
    if(n > m)
    {
        while(k--)
        {
            if(m != 0)
            {
                if(first == 0)
                {
                    s += '0';
                    s += '1';
                    first = 1;
                    n--;
                    m--;
                    continue;
                }
                if(i % 2 == 0)
                {
                    s += '0';
                    n--;
                }
                else if(i % 2 == 1)
                {
                    s+= '1';
                    m--;
                }
            }
            i++;
        }
    }

    else if(m >= n)
    {
        while(k--)
        {
            if(n != 0)
            {
                if(first == 0)
                {
                    s += '1';
                    s += '0';
                    first = 1;
                    n--;
                    m--;
                    continue;
                }
                if(i % 2 == 0)
                {
                    s += '1';
                    m--;
                }
                else if(i % 2 == 1)
                {
                    s += '0';
                    n--;
                }
            }
            i++;
        }
    }
    int sz = s.size();
    if(s[sz - 1] == '1' || lm == 1)
    {
        while(m--)
        {
            s += '1';
        }
        while(n--)
        {
            s += '0';
        }
    }
    else if(s[sz - 1] == '0')
    {
        while(n--)
        {
            s += '0';
        }
        while(m--)
        {
            s += '1';
        }
    }
    cout<<s<<endl;
}

int main()
{
    fast;
//    optimize();
//    solve();
    int t = 1;
//    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

