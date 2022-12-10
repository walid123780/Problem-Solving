#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<int,int>
#define rep(i,n)       for(ll i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define str_unique     s.resize(unique(s.begin(), s.end()) - s.begin());
#define str_unique1    s.erase(unique(s.begin(),s.end()),s.end());
#define int_length(x)  to_string(x).length()
#define all(x)         (x).begin(), (x).end()


void solve()
{
    string s,t = "";
    cin>>s;
    int n =  s.size(), cnt = 0 ;
    if(n != 8) {
        cout<<"No\n";
        return ;
    }
    for(int i =1; i <= 7 ; i++)
    {
        if(s[i] >='0' && s[i]<= '9')
        {
            cnt++;
            t+=s[i];
        }
    }
    string a = "999999",b ="100000";
    int f = 1;
    if(!(b<=t && t<= a && cnt == 6)) f = 0;
    if(!(s[0] >='A' && s[0]<= 'Z')) f = 0;
    if(!(s[n-1] >='A' && s[n-1]<= 'Z' && n == 8)) f = 0;
    if(f) cout<<"Yes\n";
    else cout<<"No\n";
}
int32_t main()
{
    fast;
//    optimize();
//    solve();
//    ll t;
//    cin>>t;
//    while(t--)
//    {
    solve();
//    }
    return 0;
}

