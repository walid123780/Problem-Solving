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


void solve()
{
    int n , m;
    cin>>n>>m;
    string s , t, a="";
    cin>>s>>t;
    bool ok = false , ok1 = false;
    for(int i = 0 ; i < n - m; i++){
        if(t[0] == '1' && s[i] == '1') ok = true;
        else if(t[0] == '0' && s[i] == '0') ok1 = true;
    }
    if(t[0] == '1' && ok == true) s[n-m] = '1';
    else if(t[0] == '0' && ok1 == true) s[n-m] = '0';
    a = s.substr(n-m ,n);
//    cout<<a<<endl;
    if(a == t) cout<<"YES\n";
    else cout<<"NO\n";

}

int main()
{
    fast;
//  optimize();
//  solve();
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
