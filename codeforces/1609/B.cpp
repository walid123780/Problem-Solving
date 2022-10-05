#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<int,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define endl           "\n"
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    fast;
    optimize();
    int n, q,cnt = 0;
    cin>>n>>q;
    string s ="";
    cin>>s;
    s= '$'+ s;
    for(int i = 1 ; i  <= n; i++)
    {
        if(s[i] == 'a' && s[i+1] == 'b' && s[i+2] == 'c' )
        {
            cnt++;
        }
    }
    while(q--)
    {
        int a;
        char ch;
        cin>>a>>ch;

        int found = 0, one = -1,two = -1,three = -1;
        for(int i = max(1,a - 2) ; i <= min(a,n-2) ; i++)
        {

            if(s[i] == 'a' && s[i+1] =='b' && s[i+2]=='c' && i < s.size()-2)
            {
                cnt--;
            }
        }
        s[a] = ch;
        for(int i = max(1,a - 2) ; i <= min(a,n-2) ; i++)
        {

            if(s[i] == 'a' && s[i+1] =='b' && s[i+2]=='c' && i < s.size()-2)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
