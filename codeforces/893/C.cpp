
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

// Sir Ami gush dibo na nibo na In Sha Allah
const int M = 1e6;
vector<int >edges[M];
bool vis[M];
vector<int > taka;

int BFS(int s)
{
    int mn = INT_MAX;
    queue<int>q;
    q.push(s);
    mn = min(mn , taka[s-1]);
    vis[s] = true;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int v : edges[u])
        {
            if(vis[v] == 0)
            {
                mn = min(mn , taka[v-1]);
                vis[v] = true;
                q.push(v);
            }
        }
    }
    return mn;
}

void solve()
{
    int n, q;
    cin>>n>>q;
    for(int i = 1; i <= n ; i++)
    {
        int x;
        cin>>x;
        taka.push_back(x);
    }
    for(int i=0; i <= n; i++)edges[i].clear();
    for(int i=0 ; i< q; i++)
    {
        int x,y;
        cin>>x>>y;
        edges[x].pb(y);
        edges[y].pb(x);
    }
    long long total_cost = 0;
    for(int i = 1; i <= n ; i++)
    {
        if(!vis[i]) total_cost += BFS(i);
    }
    cout<<total_cost<<endl;
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

