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
int d = 0;
bool check(int x)
{
    while (x != 0)
    {
        if(x % 10 == d) return true;
        x   = x /10;
    }
    return false;
}
void solve()
{
    int n;
    cin>>n>>d;
    for(int i =0; i < n ; i++)
    {
        int a = 0;
        cin>>a;
        int F = d;
        while(a > 0)
        {
            if(check(a))
            {
                cout<<"YES\n";
                F = 0;
                break;
            }
            a -= F;
        }
        if(F)cout<<"NO\n";
    }

}
int main()
{
    fast;
//  optimize();
//    solve();
    ll t = 1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}