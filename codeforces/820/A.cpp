#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<string,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
//    optimize();

    int pg,in, mx, sp, ag, read,cnt = 1;
    cin>>pg>>in>>mx>>sp>>ag;
    if(in == 0 && sp == 0) {cout<<"0"; return 0;}
    read = in;
    if(read >= pg) {cout<<"1"; return 0;}
    for(int i = 1 ; i <= 1000; i++)
    {
        int mxx = min(mx, (in + (i * sp)));
        read += mxx;
        read -= ag;
        if(read < pg)
        {
            cnt++;
        }
        else if(read >= pg ){ cnt++; break;}
    }
    cout<<cnt;
    return 0;
}
