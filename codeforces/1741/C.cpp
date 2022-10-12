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
        vector<int>arr(n+2),pre(n+2,0);
        for(int  i = 1; i <= n; i++)
        {
            cin>>arr[i];
            pre[i] = pre[i-1] + arr[i];
        }
        int ans = n;
        for(int i = 1; i <= n ; i++)
        {
            int temp = i;
            int l = i;
            int first = pre[i];
            bool flag = false;
            int j = i+1;
            while(j <= n)
            {
                if(pre[j] - pre[l] == first)
                {
                    temp = max(temp, j-l);
                    l = j;
                    if(j == n) flag = true;
                }
                j++;

            }
            if(flag)ans = min(ans,temp);
        }
        cout<<ans<<endl;
    }
    return 0;
}
