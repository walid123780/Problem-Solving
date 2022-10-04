#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<string,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define endl             "\n"
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        s= 'W' + s + 'W';
        n= s.size();
        int l = 0,r = 0, b = 0, fine = 0;
        for(int  i = 0; i < n ; i++)
        {
            if(s[i] == 'W')
            {
                if(r >= 1 && b>= 1) fine = 0 ,r = 0, b = 0;
                else if(max(r,b) >= 1 && min(r,b) == 0)
                {
                    fine = 1;
                    break;
                }
            }
            else if(s[i] == 'R') r++;
            else if(s[i] == 'B') b++;
            if(fine == 1) break;
        }
        if(fine  == 1) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
