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
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y, d =0;
        cin>>n>>x>>y;
        string a, b, c = "" ;
        cin>>a>>b;
        vector<int>p;
        for(int i = 0 ; i < n; i++)
        {
            if(a[i] == b[i]) c += '0';
            else
            {
                c += '1', d++;
                p.pb(i);
            }
        }

        if(d % 2)cout<<"-1\n";
        else if(d == 2)
        {
            if(p[1] - p[0] >=2){
                cout<<y<<"\n";
            }
            else cout<<min(x,y*2)<<"\n";
        }
        else cout<<(ll) y * (d/2) <<"\n";
    }
    return 0;
}
