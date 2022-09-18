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
    int cnt = 0;
    cin>>n>>k;
    string s;
    cin>>s;
    for(int i = 0; i <n ; i++)
    {
        if(s[i] == '#')cnt++;
        else cnt = 0;
        if(cnt == k)
        {
            red =1;
            break;
        }
    }
    if(red  == 1) cout<<"NO\n";
    else cout<<"YES\n";
    return 0;
}
