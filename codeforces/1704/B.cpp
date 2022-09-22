#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<string,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll check(ll x,ll y,ll k)
{
    ll div = (x+y) / 2;
    x = abs(x - div);
    y = abs(y - div);
    if(x <= k && y <= k) return 1;
    else return 0;
}
int main()
{
    fast;
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        ll n, k, j, i = 1;
        cin>>n>>k;
        ll arr[n+10];
        for(ll i = 1 ; i <= n ; i++)
        {
            cin>>arr[i];

        }
        ll need = 0;
        for( ; i <= n ; )
        {
            ll sum = 0, cnt = 1, mn = INT_MAX, mx = INT_MIN;
            for(j = i  ; j <= n; j++)
            {
                sum += arr[j];
                mn = min(mn, arr[j]);
                mx = max(mx, arr[j]);
                if(check(mn, mx, k) == 0)
                {
                    need++;
                    break;
                }
                cnt++;
            }
            i = j;
        }
        cout<<need<<endl;

    }
    return 0;
}
