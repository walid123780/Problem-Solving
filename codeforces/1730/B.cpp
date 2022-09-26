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

int  main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        int  a[n+1]={0},b[n+1] ={0};
        double sum = 0.0;
        int mn = INT_MAX,mx = -INT_MAX;
        rep(i,n)
        {
            cin>>a[i];
        }
        rep(i,n)
        {
            cin>>b[i];
        }
        rep(i,n)
        {
            mn = min(mn,a[i] - b[i]);
            mx = max(mx,a[i] + b[i]);
        }
        sum = (mn + mx) / 2.0;
        printf("%.1lf\n",sum);



    }
}
