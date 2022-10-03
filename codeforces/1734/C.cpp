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

int main()
{
    fast;
//  optimize();
    int t = 1;
    cin>>t;
    while(t--)
    {
        ll n, ans = 0;
        cin>>n;
        string s;
        cin>>s;
        s = '#' + s;
        int removed[n+1]= {0};
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = i; j <= n ; j += i)
            {
                if(s[j] == '1') break;
                if(removed[j]) continue;
                removed[j] = 1;
                ans += i;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
