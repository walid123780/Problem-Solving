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

int  main()
{
    fast;
//    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        string s, c ="";
        cin>>s;
        int len = s.size();
        int x = s[len-1] - '0';
        for(int i = len - 1; i >= 0; i--)
        {
            if(s[i-1] - '0' > x)
            {
                c+= min(9 + '0',(s[i-1] + 1));
            }
            else if(s[i-1] - '0' <=  x)
            {
                c += (x + '0');
                x = s[i-1] - '0';
            }
        }
        sort(c.begin(),c.end());
        cout<<c<<endl;

    }
}
