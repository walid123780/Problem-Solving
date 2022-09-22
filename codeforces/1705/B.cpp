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
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        ll n,sum = 0,cnt =0 , ok = 0;
        cin>>n;
        ll arr[n+1];
        rep(i,n)
        {
            cin>>arr[i];
            if(i == n-1)continue;
            if(arr[i] > 0) ok = 1;
            if(arr[i] == 0 && ok == 1) cnt++;

            sum+=arr[i];
        }
        if(sum == 0) cout<<0<<endl;
        else cout<<sum+cnt<<endl;

    }
    return 0;
}
