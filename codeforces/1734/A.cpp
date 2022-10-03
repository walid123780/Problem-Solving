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
        int arr[n+1];
        rep(i,n) cin>>arr[i];
        sort(arr,arr+n);
        int mn = INT_MAX;
        for(int i = 0 ; i < n-2; i++){
            int x = arr[i+2] - arr[i+1] ;
            int y = arr[i+1] - arr[i];
            int z = x + y;
            mn = min(mn, z);

        }
        cout<<mn<<endl;
    }
    return 0;
}
