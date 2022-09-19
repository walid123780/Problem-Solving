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
    int n,k;
    cin>>n>>k;
    int range = n * k;
    int a[k+1];
    map<int,int>mp;

    rep(i,k)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    int d = 1;
    rep(i,k)
    {
        cout<<a[i]<<" ";
        for(int j = 1; j < n; j++){
            if(mp[d] > 0){
                d++;
                j--;
            }
            else {
                cout<<d<<" ";
                d++;
            }
        }
        cout<<"\n";
    }

    return 0;
}
