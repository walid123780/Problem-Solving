#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n+1],dp[n+1];
    memset(dp,-1,sizeof(dp));
    dp[1]=0;
    for(int i=1 ; i<=n; i++) cin>>arr[i];
    for(int i=1; i<=n; i++)
    {
        for(int j=i+1; j<=k+i; j++)
        {
            if(j>n) break;
            if(dp[j]==-1)
            {
                dp[j]=abs(arr[i]-arr[j])+dp[i];
            }

            else if(abs(arr[i]-arr[j])+dp[i]<=dp[j])
            {
                dp[j]=abs(arr[i]-arr[j])+dp[i];
            }
        }
    }
    cout<<dp[n]<<endl;
    return 0;
}
