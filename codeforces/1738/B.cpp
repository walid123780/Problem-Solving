#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<int,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define str_unique     s.resize(unique(s.begin(), s.end()) - s.begin());
#define str_unique1    s.erase(unique(s.begin(),s.end()),s.end());
#define int_length(x)  to_string(x).length()
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
//    optimize();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll s[n+1] = {0};
        rep(i,k) cin>>s[i];
        if(k == 1)
        {
            cout<<"YES\n";
            continue;
        }
        for(int i  = k-1 ; i > 0 ; i--)
        {
            s[i] = s[i] - s[i-1];
        }
//        output(s,k);
//        cout<<endl;
        if(is_sorted(s+1,s+k))
        {
            ll x = (n - k) + 1;
            ll y = x * s[1];
            if(y >= s[0]) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else cout<<"NO\n";
    }

    return 0;
}
