#include<bits/stdc++.h>
using namespace std;
#define MAX 10000000
#define ll long long
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long  n,nn;
        cin>>n;
        //nn=n-1;
        ll arr[n+10],ar=0,x=0;
        bool ok = false,okk=false;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        for(int j=2; j<=n; j++)
        {
            if(arr[j]<arr[j-1])
            {
                x++;
                j++;
            }
        }
        cout<<x<<endl;

    }
    return 0;
}
