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
        int n,m,e,v,d;
        cin>>n>>m>>e>>v>>d;
        if((e+d >= n and e-d <= 1) or (v+d >= m and v-d <= 1)) cout<<-1<<"\n";
        else if(((v-d <= 1) && (e-d <= 1))or ((v+d >= m)  && (e+d >= n)))
        {
            cout<<-1<<"\n";
        }
        else cout<<abs((n-1)+(m-1))<<"\n";
    }

    return 0;
}
