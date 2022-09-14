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
ll evenSum(ll n)
{
    // required sum
    return (n * (n + 1));
}
ll oddsum(ll n)
{
    return n*n;
}

int main()
{
    fast;
    ll n;
    cin>>n;
    if(n % 2 != 0) {
       ll even = evenSum(n/2);
       ll odd = oddsum((n/2) + 1);
       cout<<even - odd<<endl;
    }
    else if(n % 2 == 0){
        ll even = evenSum(n/2);
        ll odd = oddsum(n/2);
        cout<<even - odd<<endl;
    }
    return 0;
}
