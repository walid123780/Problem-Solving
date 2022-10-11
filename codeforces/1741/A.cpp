#include <bits/stdc++.h>
using namespace std;

#define ll            long long int
#define pii            pair<int,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define str_unique     s.resize(unique(s.begin(), s.end()) - s.begin());
#define str_unique1    s.erase(unique(s.begin(),s.end()),s.end());
#define ll_length(x)   to_string(x).length()
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
//    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        string s, t;
        cin>>s>>t;
        if(s == t)
        {
            cout<<"=\n";
            continue;
        }
        int cnt=0,cn = 0;
        int m = s.size();
        int n = t.size();
        for(int i =0 ; i < s.size(); i++)
        {
            if(s[i] == 'X') cnt++;
        }
        for(int i =0 ; i < t.size(); i++)
        {
            if(t[i] == 'X') cn++;
        }
        if(s[m-1] == 'S')
        {
            if(t[n-1] =='S')
            {
                if(cnt > cn) cout<<"<\n";
                else cout<<">\n";
            }
            else cout<<"<\n";
        }

        else if(s[m-1] == 'M')
        {
            if(t[n-1] =='M')
            {
                if(cnt > cn) cout<<">\n";
                else cout<<"<\n";
            }
            else if(t[n-1] =='S') cout<<">\n";
            else cout<<"<\n";
        }
        else if(s[m-1] == 'L')
        {
            if(t[n-1] =='L')
            {
                if(cnt > cn) cout<<">\n";
                else cout<<"<\n";
            }

            else cout<<">\n";
        }

    }
    return 0;
}
