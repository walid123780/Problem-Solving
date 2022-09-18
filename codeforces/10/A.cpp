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

//bool wins(string s, string t)
//{
//    if(s == "rock") return t == "scissors";
//    if(s == "scissors") return t == "paper";
//    if(s == "paper") return t == "rock";
//
//}
int main()
{
    fast;
//    optimize();
    int k,p1,p2,p3,t1,t2;
    int l[111],r[111];
    cin>>k>>p1>>p2>>p3>>t1>>t2;
    rep(i,k){
        cin>>l[i]>>r[i];
    }
    int ans = 0;
    rep(i,k){
        ans += (r[i] - l[i]) * p1;
        if(i < k-1){
            int remins = l[i+1] - r[i];
            int fst = min(remins , t1);
            ans += fst * p1;
            remins -= fst;

            fst = min(remins , t2);
            ans += fst * p2;
            remins -= fst;

            ans +=  remins * p3;
        }
    }
    cout<<ans<<"\n";
    return 0;
}
