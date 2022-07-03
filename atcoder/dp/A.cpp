#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int arr[n+1],dp[n+1];
    memset(dp,-1,sizeof(dp));
    dp[1]=0;
    for(int i=1 ; i<=n; i++) cin>>arr[i];
    for(int i=1; i<=n; i++)
    {
        if(dp[i+1]==-1)
        {
            dp[i+1]=abs(arr[i]-arr[i+1])+dp[i];
        }

        else if(abs(arr[i]-arr[i+1])+dp[i]<=dp[i+1])
        {
            dp[i+1]=abs(arr[i]-arr[i+1])+dp[i];
        }
        if(dp[i+2]==-1)
        {
            dp[i+2]=abs(arr[i]-arr[i+2])+dp[i];
        }
        else if(abs(arr[i]-arr[i+2])+dp[i]<=dp[i+2])
        {
            dp[i+2]=abs(arr[i]-arr[i+2])+dp[i];
        }
    }
    cout<<dp[n]<<endl;
    return 0;
}
