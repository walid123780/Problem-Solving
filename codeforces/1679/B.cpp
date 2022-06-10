#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,q,type,sum=0,Xvalue=0,pre_sum=0;
    bool check=false;
    cin>>n>>q;
    ll arr[n+100];
    map<ll,ll>m;
    m.clear();
    for(ll i=1; i<=n; i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    for(ll i=1; i<=q; i++)
    {
        ll position=0,value=0;
        cin>>type;
        if(type==1 && check==false)
        {
            cin>>position>>value;
            ll pre_sum = value - arr[position];
            sum= sum + pre_sum;
            arr[position]=value;
        }
        else if (type==1 && check==true)
        {
            cin>>position>>value;
            if(m[position]==0)  pre_sum = value - Xvalue;
            else pre_sum = value - m[position];

            sum=sum+pre_sum;
            m[position]=value;
        }
        else if(type==2)
        {
            cin>>value;
            sum=n*value;
            check = true;
            Xvalue=value;
            m.clear();
        }
        cout<<sum<<endl;
    }
    return 0;
}
