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
    int n,k,sum = 0, red =0 ;
    cin>>n >>k;

    int a[n+1] = {0};
    vector<int >odd, even;
    for(int i = 0 ; i  < n ; i++)
    {
        cin>>a[i];
        if(a[i]% 2 == 1) odd.pb(a[i]);
        else even.pb(a[i]);
    }
    int x = odd.size();
    int y = even.size();
    if(x % 2 == 0)
    {
        if(x == 0)
        {
            cout<<"NO\n";
            return;
        }
        x -= 1;
        x += y;
        if(x >= k)
        {
            if(y == 0 && (k % 2) == 0)
            {
                cout<<"NO\n";
                return;
            }
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
    else if((x + y) >= k)
    {
        if(y == 0 && (k % 2) == 0)
        {
            cout<<"NO\n";
            return;
        }
        cout<<"YES\n";
    }
    else cout<<"NO\n";
}

int main()
{
    fast;
//  optimize();
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
