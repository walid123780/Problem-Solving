#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<int,int>
#define rep(i,n)       for(ll i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define F              first
#define S              second
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define str_unique     s.resize(unique(s.begin(), s.end()) - s.begin());
#define str_unique1    s.erase(unique(s.begin(),s.end()),s.end());
#define int_length(x)  to_string(x).length()
#define all(x)         (x).begin(), (x).end()


void solve()
{
    int n, m, cnt = 0;
    cin>>n>>m;
    string s[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>s[i];
    }
    for(int i = 0 ; i < n ; i++)
    {
        for(int  j =  i + 1 ; j < n ; j++)
        {
            int f = 0;
            for(int k = 0; k < m ; k++)
            {
                if(s[i][k] == s[j][k] && s[i][k] == 'x') f = 1;
            }
            if(!f)
            {
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;

}


int32_t main()
{
    fast;
//    optimize();
//    solve();
//    ll t;
//    cin>>t;
//    while(t--)
//    {
    solve();
//    }
    return 0;
}

