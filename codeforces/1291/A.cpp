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
    int n,sum = 0, red =0 ;
    cin>>n;
    string s;
    cin>>s;
    int len = s.size();
    vector<int >odd , even;
    for(int i = 0 ; i  < len ; i++){
        if(s[i] - '0' == 0) continue;
        if((s[i] - '0')% 2) odd.pb(s[i] - '0');
    }
    if(odd.size() >=2)cout<<odd[0]<<odd[1]<<endl;
    else cout<<-1<<endl;
}

int main()
{
    fast;
//  optimize();
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
