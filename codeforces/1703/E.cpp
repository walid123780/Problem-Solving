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
    int n,ans = 0;
    cin>>n;
    string s[n];
    for(int i = 0 ; i < n ; i++) cin>>s[i];
    for(int i = 0 ; i < n/2 ; i++){
        int cnt = 0;
        for(int j = i ; j < n-i-1 ; j++){
            cnt = 0;
            if(s[i][j] == '1')cnt++;
            if(s[j][n-i-1] == '1')cnt++;
            if(s[n-i-1][n-j-1] == '1')cnt++;
            if(s[n-j-1][i] == '1')cnt++;
            ans += min(cnt , 4 - cnt);
        }
    }
    cout<<ans<<endl;

}

int main()
{
    fast;
//  optimize();
//    solve();
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
