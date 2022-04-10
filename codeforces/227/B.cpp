#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long t;
    cin>>t;
    long long arr[t+2];
    long long cnt[t+2],c[t+2];
    for(long long  i=1; i<=t; i++)
    {
        cin>>arr[i];
        cnt[arr[i]]=i;
        c[arr[i]]=t-i+1;
    }
    long long m;
    cin>>m;
    long long que[m+2],cntt=0,cc=0;
    for(long long i=1; i<=m; i++)
    {
        cin>>que[i];
        cntt=cntt+cnt[que[i]];
        cc=cc+c[que[i]];
    }
    cout<<cntt<<" "<<cc<<endl;
    return 0;
}