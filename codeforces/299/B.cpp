#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<int,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
//    optimize();
    int n,k, red = 0;
    int key = 0;
    cin>>n>>k;
    string s;
    cin>>s;
    if(s[n-1] == '#')
    {
        cout<<"NO\n";
        return 0;
    }
    for(int i = 0 ; i < n-1; i++)
    {
//        cout<<i<<"-i";
        if(s[i] == '.' && s[i+1] =='#')

        {

         key = 0;
            for(int j = i+1; j <= i+k && j < n ; j++)
            {

                if(s[j] == '.')
                {
                    i = j-1;
                    key++;
                    break;
                }
            }
            if(key == 0) red = 1;
        }
    }
    if(red  == 1) cout<<"NO\n";
    else cout<<"YES\n";
    return 0;
}
