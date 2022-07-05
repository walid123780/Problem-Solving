#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int x=0,y=0,z=0;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        x+=a,y+=b,z+=c;

    }
    if(x==0 && y==0 && z==0) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
