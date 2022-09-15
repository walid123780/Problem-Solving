#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<string,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define cmp(i,n)       for(int i=1;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1],an = -1, ans = 0;
        rep(i,n) cin>>arr[i];
        rep(i,n)
        {
            if(arr[i] == 1)
            {
                if(an == -1) an = i + 1;
                else
                {
                    ans += i - an ;
                    an = i + 1;
                }
            }

        }
        cout<<ans<<endl;
    }
    return 0;
}
