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
    int n,m,x , j;
    cin>>n>>m;
    x = n;
    int arr[n+1];
    int ara[n+1],l = n-1;
    rep(i,m)
    {
        cin>>arr[i];
        if(x>=arr[i])
        {
            for( j = x ; j >= arr[i] ; j--)
            {
                ara[j] = arr[i];
            }
            x = j;
        }
    }
    for(int i = 1; i <= n; i++) cout<<ara[i]<<" ";


    return 0;
}
