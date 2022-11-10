#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<int,int>
#define rep(i,n)       for(ll i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define sentence(s)    scanf(" %[^\n]s\n",s);
#define YES            cout << "YES\n"
#define NO             cout << "NO\n"
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define str_unique     s.resize(unique(s.begin(), s.end()) - s.begin());
#define str_unique1    s.erase(unique(s.begin(),s.end()),s.end());
#define int_length(x)  to_string(x).length()
void solve()
{
    int n;
    cin>>n;
    int a[n+1] ={0};
    bool ok[n+1] = {false};
    rep(i, n)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    int cnt = 0;
    for(int i = 0; i < n ; i++)
    {
        int indx = upper_bound(a,a+n,a[i])-a;
        int red = 0;
        if(indx == n)
        {
            cnt++ ;
            continue;
        }
        if(ok[indx] == false)
        {
            red = 1;
            ok[indx] = true;
        }
        else if(ok[indx] == true)
        {
            int j ;
            for(j = indx; j < n; j++)
            {

                if(ok[j] == false)
                {
                    red = 1;
                    ok[j] = true;
                    break;
                }
            }
        }
        if(!red) cnt++;
    }
    cout<<cnt<< endl;

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
    return 0;
}
