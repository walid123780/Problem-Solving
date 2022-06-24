#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MIN -100000
//int check[10]= {0,1,2,3,4,5,6,7,8,9};
int main()
{

    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x=0;
        cin>>n;
        ll arr[n+10],b[n+10]={0};
        bool flag=false;
        for(ll i=0; i<n; i++)
        {
            cin>>arr[i];
            x = arr[i]%10;
            b[x]++;
            x=0;
        }
        for(ll i=0; i<=9; i++)
        {
            if(b[i]>0)
            {
                for(ll j=i; j<=9; j++)
                {
                    if(i==j && b[j]-1==0)continue;
                    if(b[j]>0)
                    {
                        for(ll k=j; k<=9; k++)
                        {
                            if((i==k && j==k) && b[k]-2==0 || (i==k && j!=k) && b[k]-1==0 || (j==k && i==k) && b[k]-2==0 || (j==k && i!=k) && b[k]-1==0 )continue;
                            if(b[k]>0)
                            {
                                if((i+j+k)%10==3 && flag==false)
                                {
                                    //cout<<i<<" "<<j<<" "<<k;

                                    flag=true;
                                    cout<<"YES\n";
                                }
                            }
                            if(flag==true)break;
                        }
                    }
                    if(flag==true)break;
                }
            }
            if(flag==true)break;
        }
        if(flag==false)cout<<"NO\n";
    }
    return 0;
}
