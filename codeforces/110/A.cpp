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

int main()
{
    fast;
    ll n , f = 0, s = 0;
    cin>>n;
    while(n != 0)
    {
        int x = n % 10;
        if(x == 7 or x == 4) s++;
        n /= 10;
    }
    if(s == 4 or s == 7)cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}
