#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x=0,y=0;
        cin>>n;
        if(n%2!=0 || n<4) cout<<"-1\n";
        else
        {
            if(n%4==0 && n%6==0) cout<<n/6<<" "<<n/4<<endl;
            else if(n%6 !=0 && n%4==0) cout<<(n/6)+1<<" "<<n/4<<endl;
            else
            {
                int x=n%6;
                int y=n%4;
                if(x+y>=4)cout<<(n/6)+1<<" "<<n/4<<endl;
                else cout<<(n/6)<<" "<<n/4<<endl;
            }
        }

    }
    return 0;
}
