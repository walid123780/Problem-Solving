#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<int,int>
#define rep(i,n)       for(ll i=0;i<n;i++)
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
    ll n;
    cin>>n;
    ll a[n+10] = {0};
    for(ll i = 0; i < n ; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
//    output(a,n);
//    cout<<endl;
    ll mx  = 0, x = 0, y = 0, z = 0;
    for(ll i = 1; i < n - 1; i++)
    {
        ll o = 0, p = 0, val = 0, e = 0,f = 0, val2 = 0;
        o = abs(a[0] - a[i]);
        p = abs(a[n-1] - a[i]);
        val = max(o,p);
        e = abs(a[i] - a[i-1]);
        f = abs(a[i+1] - a[i]);
        val2 = max(e,f);
        mx = max(mx,(val2 + val));
    }
    z = abs(a[n-1] - a[0]);
    x =  z + (a[n-1] - a[n-2]);
    y = z + (a[1] - a[0]);
    mx = max(mx,max(x,y));
    cout<<mx<<endl;
}

int main()
{
    fast;
//  optimize();
//  solve();
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
