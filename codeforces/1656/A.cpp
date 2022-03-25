#include<bits/stdc++.h>
using namespace std;
int main()
{


    int t;
    cin>>t;
    while(t--)
    {
        int n,m=0,a,b,c,d=0;
        cin>>n;
        int arr[n+1];
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        b=arr[1];
        c=arr[1];
        for(int i=2; i<=n; i++)
        {
            if(arr[i]>c)
            {
                c=arr[i];
                m=i;
            }
            if(arr[i]<b)
            {
                b=arr[i];
                d=i;
            }
        }
        if(d==0 )d=1;
        if(m==0) m=1;
        cout<<d<<" "<<m<<endl;
    }
    return 0;
}
