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
        string s,t ="";
        cin>>s;
        int k ;
        cin>>k;
        rep(i,k)
        {
            char h;
            cin>>h;
            t += h;
        }
        int mx = 0,cnt = 0;
        for(int  i = 0 ; i  < n; i++)
        {


            if(t.find(s[i]) != -1)
            {
                mx = max(mx, cnt);
                cnt = 0;
            }
            cnt++;
        }
       cout << mx<<endl;
    }
    return 0;
}
