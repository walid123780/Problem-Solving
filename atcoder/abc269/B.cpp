#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<string,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define cmp(i,n)       for(int i=1;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    fast;
    string s;

    int ok = 1;
    int a= 0 ,b= 0,c= 0,d= 0;
    for(int j = 1 ; j <= 10; j++)
{
    cin>>s;

    for(int i = 0 ; i <s.size(); i++)
        {
            if(s[i] == '#' && ok == 1)
            {
                c = i+1;
                ok = 2;
                a = j;
            }
            if(s[i] == '.'  && ok == 2)
            {
                d = i;
                ok = 3;
            }
            if(s[i] == '#' )
            {
                b = j;
            }
        }
    }
    if(d == 0) d = 10;
    cout<<a<<" "<<b<<endl<<c<<" "<<d<<endl;;
        return 0;
}
