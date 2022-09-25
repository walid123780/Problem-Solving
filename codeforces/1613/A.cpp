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

int stringTointeger(string str)
{
    int temp = 0;
    for (int i = 0; i < str.length(); i++) {
        temp = temp * 10 + (str[i] - '0');
    }
    return temp;
}
int main()
{
    fast;
//    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        string nn,mm;
        int p,o;
        cin>>nn>>p>>mm>>o;
        int len = nn.size();
        int len1 = mm.size();
        if(len > len1)
        {
            int x = len - len1;
            if(o >= x)
            {
                o -= x;
                while(x--)
                {
                    mm += '0';
                }
            }
        }
        else if(len1 > len)
        {
            int x = len1 - len;
            if(p >= x)
            {
                p -= x;
                while(x--)
                {
                    nn += '0';
                }
            }
        }
        int n = stoi(nn);
        int m = stoi(mm);
        if((m > n && o >= p) || (n > m && o > p) || (n == m && o > p)) cout<<"<";
        else if((n > m && p >= o) || (m > n && p > o)  || (n == m && p > o)) cout<<">";
        else cout<<"=";
        cout<<"\n";
    }
    return 0;
}
