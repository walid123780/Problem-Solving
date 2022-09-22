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
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x,y,d;
        cin>>n>>m>>x>>y>>d;
        if((y - d <= 1 || x + d >= n) && (y + d >= m || x - d <= 1)) cout<<-1<<"\n";
        else cout<<abs((n-1)+(m-1))<<"\n";
    }
    return 0;
}
