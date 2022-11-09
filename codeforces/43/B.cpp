#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<int,int>
#define rep(i,n)       for(ll i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define YES            cout << "YES\n"
#define NO             cout << "NO\n"
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define str_unique     s.resize(unique(s.begin(), s.end()) - s.begin());
#define str_unique1    s.erase(unique(s.begin(),s.end()),s.end());
#define int_length(x)  to_string(x).length()

void solve()
{
    char s[5000], s1[5000];
    fgets(s, 5000, stdin);
    fgets(s1, 5000, stdin);

    multiset<char>a;
    for(int i = 0 ; s[i] != '\0'; i++)
    {
        a.insert(s[i]);
    }

    for(int i = 0; i < s1[i] != '\0'; i++)
    {

        auto it = a.find(s1[i]);
        if(it == a.end() )
        {
            cout<<"NO\n";
            return ;
        }
        else if(it != a.end() && s1[i] != ' ')a.erase(it);
    }
    cout<<"YES\n";

}
int main()
{
    fast;
//  optimize();
//    ll t = 1;
//    cin>>t;
//    while(t--)
//    {
    solve();
//    }
//    return 0;
}
