#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<string,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);


#define str_unique     s.resize(unique(s.begin(), s.end()) - s.begin());

const int MOD = 24 * 60;
int main()
{
    fast;
//    optimize();
    int t;
    cin>>t;
    set<string > p;
    while(t--)
    {
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        s.erase(unique(s.begin(),s.end()),s.end());
        p.insert(s);

    }

    cout<<p.size();
    return 0;
}
