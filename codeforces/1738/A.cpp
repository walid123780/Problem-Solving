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
    ll  t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+1]= {0},b[n+1]= {0}, l = 0, m = 0;
        for(ll i = 0; i < n ; i++)
        {
            cin>>a[i];
        }
        ll mno = INT_MAX, mne = INT_MAX;
        ll sum = 0,oddsum = 0,evsum = 0;
        ll od[n+1]= {0}, ev[n+1]= {0};
        for(ll i = 0; i < n ; i++)
        {
            cin>>b[i];
            sum+=b[i];
            if(a[i] == 1)
            {
                od[l++] = b[i];
                oddsum+=b[i];
                mno = min(b[i], mno);
            }
            else if(a[i] == 0)
            {
                ev[m++] = b[i];
                evsum+=b[i];
                mne = min(b[i], mne);
            }
        }
        if( l == m)
        {
            sum += (sum) -  min(mno,mne);
        }

        else
        {
            sort(od,od+l);
            sort(ev,ev+m);
            sum = 0;
            int sz = min(l, m );
            sz -= 1;
            int cnt = sz;
            for(int i = l-1 ; i >= 0; i--)
            {
                if(sz>=0)
                {
                    sum += od[i];
                    sum += od[i];
                    sz--;
                }
                else sum += od[i];
            }
            for(int i = m-1 ; i >= 0; i--)
            {
                if(cnt>=0)
                {
                    sum += ev[i];
                    sum += ev[i];
                    cnt--;

                }
                else sum += ev[i];
            }

        }
        cout<<sum<<endl;
    }

    return 0;
}
