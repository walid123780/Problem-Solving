#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<int,int>
#define rep(i,n)       for(ll i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define YES            cout << "YES\n"
#define NO             cout << "NO\n"
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define str_unique     s.resize(unique(s.begin(), s.end()) - s.begin());
#define str_unique1    s.erase(unique(s.begin(),s.end()),s.end());
#define int_length(x)  to_string(x).length()


const int mod = 998244353;

void solve()
{
    ll a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    ll x = ((a % mod) * (b % mod)) % mod;
    x = ((x* (c% mod)) % mod);
    ll y = ((d% mod)* (e%mod)) % mod;
    y = (y *(f% mod))%mod;
    ll ans = (x + mod - y) % mod;
    cout<<ans<<endl;


}
int main()
{
    fast;
//  optimize();
    solve();
//    ll t = 1;
//    cin>>t;
//    while(t--)
//    {
//        solve();
//    }
    return 0;
}
