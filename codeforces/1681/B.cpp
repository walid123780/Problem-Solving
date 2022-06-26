#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n+10]={0};
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];

        }
        ll m,sum=0;
        cin>>m;
        ll b[m+10];
        for(ll i=1; i<=m; i++)
        {
            cin>>b[i];
            sum=sum+b[i];
        }
        sum=sum%n;
        sum++;
        cout<<arr[sum]<<endl;
    }
    return 0;
}
