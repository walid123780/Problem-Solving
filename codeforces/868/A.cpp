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


int main()
{
    fast;
//    optimize();

    string s,g="",h="";
    cin>>s;
    int tt,red = 0;
    cin>>tt;
    string t[111];
    rep(i,tt)
    {
        string a = "";
        cin>>a;
        t[i] = a;
        if(s == a) red = 1;
    }
    if(red == 1)
    {
        cout<<"YES";
        return 0;
    }
    for(int i = 0 ; i < tt; i++)
    {

        for(int j = 0 ; j < tt; j++)
        {
//            if(i == j )continue;
            g = t[i][1] ;
            g += t[j][0];

            if(g == s or h == s)
            {
                cout<<"YES";
                return 0;
            }
            g = "",h ="";
        }
    }
    cout<<"NO";

    return 0;
}
