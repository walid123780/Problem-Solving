#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long arr[n+1],odd[n+10]= {0},even[n+1],l=0,j=0,i,ans=0;
        for(long long i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0)even[l++]=arr[i];
            else if(arr[i]%2!=0)j++;
        }
        //cout<<l<<endl;
        if(n==j) cout<<"0\n";
        else if(n==l)
        {
            sort(even,even+l);
            long long optimal=1000000;
            for(int d=0; d<l; d++)
            {
                long long sum_even=even[d];
                for( i=1; ; i++)
                {
                    if(i>optimal)
                    {
                        i=optimal+1;
                        break;
                    }
                    sum_even=sum_even/2;
                    if(sum_even%2==1) break;
                }
                if(optimal>i)
                {
                    optimal=i;
                }
            }
            ans=ans+optimal;
            ans=ans+l-1;
            cout<<ans<<endl;
        }
        else cout<<l<<endl;
    }
    return 0;
}
