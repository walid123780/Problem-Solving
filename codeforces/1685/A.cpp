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
        long long  n;
        cin>>n;
        ll arr[n+10],array[n+10];
        bool ok = false,okk=false;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        if(n%2!=0)cout<<"NO"<<endl;
        else
        {
            sort(arr+1,arr+n+1);
            ll i=1,j=n/2+1,x=1;
            while(j<=n)
            {

                array[x]=arr[i];
                array[x+1]=arr[j];
                x=x+2;
                i++;
                j++;
            }
            array[0]=arr[n];
            array[n+1]=arr[1];
            for(int i=1; i<=n; i++)
            {

                if(array[i]>array[i+1] && array[i]>array[i-1] || array[i]<array[i+1] && array[i]<array[i-1])
                    ok=true;
                else okk =true;

            }
            if(okk==true)cout<<"NO"<<endl;
            else{
            cout<<"YES"<<endl;
            for(int i=1; i<n; i++) cout<<array[i]<<" ";
            cout<<array[n]<<endl;}

        }
    }
    return 0;
}
