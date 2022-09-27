#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<int,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
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
        string s,ss;
        cin>>s>>ss;

        int mx = 0;
        for(int i = 0 ; i < s.size(); i++)
        {
            string t = "";
            for(int j  = i  ;  j< s.size(); j++)
            {
                t+=s[j];
                if(ss.find(t) == -1) break;
                mx = max(mx , j - i + 1);
            }

        }
        cout<<s.size() + ss.size() -  2 * mx <<endl;
    }
    return 0;
}
