#include<bits/stdc++.h>
using namespace std;
#define ll long long
//#define MIN -100000
int main()
{
    ll n,cnt=1,l=0,r=0;
    cin>>n;
    ll arr[n+1];
    ll dp[n+1];
    cin>>arr[0];
    if(n==1) cout<<"1\n";
    else
    {
        ll x_sum=arr[0];
        for(ll i=1; i<n; i++)
        {
            cin>>arr[i];
            if(x_sum<=arr[i])cnt++;
            if(i==n-1)
            {
                dp[l++]=cnt;
                cnt=1;
                break;
            }
            else if(x_sum>arr[i])
            {
                dp[l++]=cnt;
                cnt=1;
            }
            x_sum=arr[i];
        }
        ll pop=*max_element(dp,dp+l);
        cout<<pop<<endl;
    }

    return 0;
}
