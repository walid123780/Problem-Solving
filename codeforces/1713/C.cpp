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
    int t;
    cin>>t;

    while(t--)
    {
        ll n, j = 0,sqr = 0;
        cin>>n;
        bool ok[n]= {false};
        vector<int>v;
        for(int i = n-1 ; i >= 0; )
        {
            if(sqr < i)
            {
                j++;
                sqr =  j * j;
                continue;
            }
            else if((sqr >= i) && (sqr - i <= n - 1) && ok[sqr - i] == false)
            {
//                cout<<sqr<<" ";
                ll ans = sqr - i;
                ok[ans] = true;
                v.pb(ans);
                i--;
            }

            else
            {
                j--;
                sqr = j * j;
                continue;
            }

        }
        reverse(v.begin(),v.end());
//        rep(i,n) cout<<i<<" ";
//        cout<<endl;
        output(v,n);
        cout<<endl;
    }
    return 0;
}
