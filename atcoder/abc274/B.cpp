#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<int,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define str_unique     s.resize(unique(s.begin(), s.end()) - s.begin());
#define str_unique1    s.erase(unique(s.begin(),s.end()),s.end());
#define int_length(x)  to_string(x).length()


void solve()
{
    int n,m;
    cin>>n>>m;
    char a[n+1][m+1];
    for(int i = 0; i < n ; i++)
    {
        for(int j = 0 ; j< m ; j++)
        {
            cin>>a[i][j];
        }
    }
    vector<int> v;
    for(int i = 0; i < m ; i++)
    {
        int cnt = 0;
        for(int j = 0 ; j < n ; j++)
        {
            if(a[j][i] == '#')cnt++;
        }
        v.pb(cnt);
    }
    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    fast;
//  optimize();
//    ll t;
//    cin>>t;
//    while(t--)
//    {
    solve();
//    }
    return 0;
}
