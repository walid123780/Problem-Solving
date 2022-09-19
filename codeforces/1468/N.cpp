#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<int,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
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
        int c[4];
        rep(i,3)cin>>c[i];
        int w[6];
        rep(i,5)cin>>w[i];
        if(w[0] > c[0] || w[1] > c[1] || w[2] > c[2])cout<<"NO\n";
        else
        {
            rep(i,3)
            {
                c[i] -= w[i];
            }
            if(c[0] < w[3])
            {
                w[3] -= c[0];
                c[0] = 0;
                c[2] -= w[3];
            }
            if(c[1] < w[4])
            {
                w[4] -= c[1];
                c[1] = 0;
                c[2] -= w[4];
            }
             if(c[2] >= 0 && c[1] >= 0 && c[0] >= 0)  cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}
