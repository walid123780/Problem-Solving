#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MIN -100000
#define MAX 100000
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,temp=MIN,big=0;
        bool Yes=false;
        cin>>n;
        ll a[n+1],b[n+1];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(ll j=0; j<n; j++)
        {
            cin>>b[j];
            if(a[j]-b[j]>big)
            {
                big=a[j]-b[j];
            }
        }
        //cout<<big<<endl;
        for(int i=0; i<n; i++)
        {
            if(a[i]-big == b[i]) continue;
            if((a[i]-big != b[i]) && (a[i]-big<0 && b[i]==0)){
               continue;
            }
            else Yes=true;
        }
        if(Yes==true){
            cout<<"NO\n";
        }
        else cout<<"YES\n";
    }

    return 0;
}
