#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<int,int>
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
    int a[10];
    cin>>a[0];
    cin>>a[1];
    cin>>a[2];
    cin>>a[3];
    cin>>a[4];
    sort(a,a+5);
    int ans = 1;
    for(int i = 1; i <5 ;i++) {
        if(a[i]!=a[i-1])ans++;
    }
    cout<<ans<<endl;



    return 0;
}
