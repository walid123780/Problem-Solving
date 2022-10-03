#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<string,int>
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
//  optimize();
    int t = 1;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       for(int i = 1 ; i <= n ; i++){
        for(int j = 1; j <= i ; j++){
           if(j == 1 or j == i) cout<<1<<" ";
           else cout<<"0 ";
        }
        cout<<"\n";
       }
    }
    return 0;
}
