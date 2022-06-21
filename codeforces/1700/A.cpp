#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        ll sum=0;
        cin>>n>>m;
        for(ll i=1;i<=m;i++){
            sum=sum+i;
        }
        //cout<<sum<<endl;
        for(ll i=2;i<=n;i++){
            sum=sum+(i*m);
        }
        cout<<sum<<endl;
    }
    return 0;
}
