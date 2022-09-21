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
    int t, dep = 0, ari =0 , de= 0 ,ar = 0;
    cin>>t;
    string s;
    cin>>s;
    while(t--)
    {
        string ls;
        cin>>ls;
        for(int i = 0; i < 3; i++)
        {
            if(ls[i] == s[i])dep++;
        }
        for(int i = 5,j=0; i < 8; i++,j++)
        {
            if(ls[i] == s[j])ari++;

        }
        if(dep == 3) de++;
        if(ari == 3) ar++;
        dep = ari = 0;
    }
//    cout<<de<<" "<<ar<<endl;
    if(de > ar) cout<<"contest";
    else if(ar >= de) cout<<"home";

    return 0;
}
