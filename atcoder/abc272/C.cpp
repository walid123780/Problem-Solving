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
void solve()
{
    int n;
    cin>>n;
    vector<int > odd(0,-1), even(0,-1);
    rep(i,n)
    {
        int x;
        cin>>x;
        if(x % 2) odd.pb(x);
        else even.pb(x);
    }
    sort(odd.begin(),odd.end());
    sort(even.begin(), even.end());

    ll a = even.size();
    ll b = odd.size();
    if(a < 2 && b >= 2)
    {
        ll d = odd[b-1] + odd[b-2];
        cout<<d<<endl;
        return;

    }
    else if(b < 2 && a >= 2)
    {
        ll c = even[a-1] + even[a-2];
        cout<<c<<endl;
        return;

    }
    else if(b < 2 && a < 2)
    {
        cout<<-1<<endl;
        return;
    }

    ll c = even[a-1] + even[a-2];
    ll d = odd[b-1] + odd[b-2];

    cout<<max(c,d)<<endl;
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
