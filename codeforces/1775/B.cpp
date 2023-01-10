
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
     int n;
    cin>>n;
    map<int , int > mp;
    vector<int>v[n];
    int Y = 1;
    for(int i = 0; i < n  ; i++){
        int x;
        cin>>x;
        for(int j = 0; j < x ; j++){
            int a;
            cin>>a;
            v[i].pb(a);
            mp[a]++;
        }
    }
    int f = 1;
    for(int i = 0 ; i < n ; i++){
        int f1 = 1;
        for(int j = 0 ; j < (int)v[i].size(); j++){
            f1 &= (mp[v[i][j]] > 1);
        }
        if(f1){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";

}

int main()
{
    fast;
//    optimize();
//    solve();
    int t = 1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

