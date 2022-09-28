#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<string,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define nn           "\n"
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        int one  = 0, zero = s.size() - 1;
        for(int i = 0 ; i < s.size(); i++)
        {
            if(s[i] == '1') one  = i;
        }
        for(int i = 0 ; i < s.size(); i++)
        {
            if(s[i] == '0')
            {
                zero = i ;
                break;
            }
        }
        cout<<zero - one + 1<<endl;
    }
    return 0;
}



