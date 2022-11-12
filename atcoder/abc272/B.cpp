#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<int,int>
#define rep(i,n)       for(ll i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define sentence(s)    scanf(" %[^\n]s\n",s);
#define YES            cout << "YES\n"
#define NO             cout << "NO\n"
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define str_unique     s.resize(unique(s.begin(), s.end()) - s.begin());
#define str_unique1    s.erase(unique(s.begin(),s.end()),s.end());
#define int_length(x)  to_string(x).length()
bool a[300][300];

void solve()
{
    int n,m;
    cin>>n>>m;
    for(int i = 1; i <= m; i++)
    {
        int k;
        cin>>k;
        vector<int >v(k);
        for(int j = 0; j < k; j++)
        {
            cin>>v[j];
        }
        for(int j = 0; j < k; j++)
        {
            for(int l = 0; l < k; l++)
            {
                a[v[j]][v[l]] = true;
                a[v[l]][v[j]] = true;
            }
        }
    }
        for(int i = 1; i <= n ; i++)
        {
            for(int j = i+1 ; j <= n; j++)
            {
                if(!a[i][j])
                {
                    cout<<"No\n";
                    return;
                }
            }
        }
    cout<<"Yes\n";
}
int main()
{
    fast;
//  optimize();
//    ll t = 1;
//    cin>>t;
//    while(t--)
//    {
    solve();
//    }
    return 0;
}
