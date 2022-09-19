#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<string,int>
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
        int n,x,y;
        cin>>n>>x>>y;
        int z = min(x,y);
        int a = max(x,y);
//        if(a == 1) for(int i = 2; i <=n; i++) cout<<i<<" ";
        if(z != 0 or (z == 0 && a == 0 ) or (n-1) % a != 0 ) cout<<"-1";
        else
        {
            int h = 1,cnt =0;
            for(int i = 1; i < n ; i++)
            {

                if(cnt != a)cout<<h<<" ";
                else {
                    if(h == 1) h+= a + 1;
                    else h += a;
                    cnt = -1;
                    i--;
                }
                cnt++;

            }

        }
        cout<<"\n";
    }

    return 0;
}
