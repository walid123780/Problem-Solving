#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<string,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define endl           "\n"
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);


int  main()
{
    fast;
//    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        string a,b ;
        cin>>a>>b;

        int n = a.size();
        int m = b.size();
        int mx = n+m;
        for(int i = 0 ; i < n; i++)
        {
            for(int j = 0; j < m ; j++)
            {

                for(int k  = 0 ; i + k < n && j + k < m ; k++)
                {
                    if(a[i+k] != b[j+k]) break;
                    else mx = min(mx, n + m - (k + 1) * 2);
                }
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}



