#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<string,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define cmp(i,n)       for(int i=1;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans = INT_MAX, pos = -1;
        cin>>n;
        map<int,int>mp;
        set<int>s;
        for(int i = 1; i <= n; i++)
        {
            int x;
            cin>>x;
            if(s.find(x) == s.end())
            {
                s.insert(x);
                mp[x] = i;
            }
            else mp.erase(x);
        }
        if(mp.empty()) cout<<pos<<endl;
        else cout<<mp.begin()->second<<endl;
    }
    return 0;
}
