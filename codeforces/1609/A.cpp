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
        long long a[n+1],k=0,l=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];

        }
        sort(a,a+n);
        long long mx=0,cnt=0;
        long long  sum=0;
        for(int i=0; i<n; i++)
        {
            while(a[i]%2==0)
            {
                a[i]=a[i]/2;
                cnt++;
            }
            mx=max(mx,a[i]);
            sum=sum+a[i];
        }
        long long tt=mx;

        for(int i=1; i<=cnt; i++)
        {
            tt=tt*2;
        }
        cout<<sum+tt-mx<<endl;
    }

    return 0;
}
