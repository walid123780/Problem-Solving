#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<string,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);

//bool wins(string s, string t)
//{
//    if(s == "rock") return t == "scissors";
//    if(s == "scissors") return t == "paper";
//    if(s == "paper") return t == "rock";
//
//}
int main()
{
    fast;
//    optimize();
    int a[3] = {0};
    vector<string>s(3);
    rep(i,3) cin>>s[i];
    rep(i,3)
    {
        bool ok = true;
        rep(j,3)
        {
            if( (s[i][0] == 'r' && s[j][0] == 's') || (s[i][0] == 's' && s[j][0] == 'p') || (s[i][0] == 'p' && s[j][0] == 'r')) a[i]++;
        }
    }
    if(a[0] == 2) cout<<"F"; else
    if(a[1] == 2) cout<<"M"; else
    if(a[2] == 2) cout<<"S"; else
    cout<<"?";
    return 0;
}
