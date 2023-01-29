#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    for(int i=0, j=s.size()-1; i<j; i++, j--)
    {
        if(s[i]!=s[j]) return false;
    }
    return true;
}
void solve()
{
    int n ;
    long long k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(n <= k)
    {
        string r = s;
        reverse(r.begin(), r.end());
        string rs = r+s;
        string rsrs = rs + rs;
        int extra = k % (2*n);
        string s1 = rs.substr(0, extra);
        reverse(s1.begin(), s1.end());
        s1 += r + s;
        string srsr = s + r + s + r;
        for(int i=0; i<s1.size(); i++) if(s1[i]!=srsr[i])
            {
                cout<<"No\n";
                return;
            }
        cout<<"Yes\n";
    }
    else
    {
        string t = s.substr(0, k);
        reverse(t.begin(), t.end());
        size_t found = s.find(t);
        if (found != string::npos)
        {
            cout<<"Yes\n";
            return;
        }
        string p = s.substr(n - k, n);
        reverse(p.begin(), p.end());
        size_t cfound = s.find(p);
        if (cfound != string::npos)
        {
            cout<<"Yes\n";
            return;
        }
        cout<<"No\n";
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
