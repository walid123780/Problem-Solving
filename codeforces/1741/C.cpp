#include <bits/stdc++.h>
using namespace std;

#define ll            long long int
#define pii            pair<int,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define str_unique     s.resize(unique(s.begin(), s.end()) - s.begin());
#define str_unique1    s.erase(unique(s.begin(),s.end()),s.end());
#define ll_length(x)   to_string(x).length()
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
//    optimize();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<int>arr(n+2);
        int s = 0,ans = n+1;
        for(int  i = 1; i <= n; i++)
        {
            cin>>arr[i];
        }
        for(int i = 1; i <= n ; i++)
        {
            s += arr[i];
            int j = i+1, tmp = i, cnt = 0, sum = 0;
            while(j <= n)
            {
                sum += arr[j];
                cnt++;
                if(sum == s)
                {
                    tmp = max(tmp, cnt);
                    cnt = 0, sum = 0;
                }
                j++;
            }
            if(sum == 0)ans = min(ans,tmp);
        }
        cout<<ans<<endl;
    }
    return 0;
}
