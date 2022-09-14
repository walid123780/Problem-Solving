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
    int n,ans = 0,into = 0 ,x = 0;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        x = b-a;
        into += x;
        ans = max(ans, into);
        x = 0;

    }
    cout<<ans<<endl;

    return 0;
}
