#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<string,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define nn           "\n"
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);


int  main()
{
    fast;
    int a,b,c,ans =0;
    cin>>a>>b>>c;
    if((0 < b && a > b && c < b && c > 0) or  (0 > b && a < b && b < c && c < 0))ans = abs(a);
    else if((0 < b && a > b && c < b) or  (0 > b && a < b && b < c)) ans = abs(c*2) + abs(a);
    else if((0 > b && a > b) or (0 < b && a < b))ans= abs(a);
    else ans = -1;

    cout<<ans<<endl;

    return 0;
}



