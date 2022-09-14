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
    int k, w , n;
    ll ans = 0;
    cin>>k>>w>>n;
    for(int i = 1; i <= n ; i++){
        ans += (k * i);
    }
    if(ans > w) cout<<ans - w;
    else cout<<"0";
    cout<<endl;
    return 0;
}
