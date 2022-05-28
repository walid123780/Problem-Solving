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
        nn=n-1;
        ll arr[n+10],ar=0,x;
        bool ok = false,okk=false;

        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            ar=ar+arr[i];

        }
        for(int i=2; i<=n; i++)
        {
            if(arr[i] != arr[i-1]) ok = true;
        }
        //cout<<array[n]<<endl;
        if(ok==false)cout<<"YES"<<endl;
        else if(ok == true)
        {
            for(int i=1; i<=n; i++)
            {
                double div=ar-arr[i];
                double save=div/nn;
                //cout<<save<<endl;
                if(save==arr[i])
                {
                    okk=true;
                    break;
                }
            }
            if(okk==true)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }
    return 0;
}
