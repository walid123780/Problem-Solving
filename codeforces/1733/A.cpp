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


int main()
{
    fast;
//    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n+10];
        for(int i = 1 ; i <=n; i++) cin>>arr[i];
        ll sum = 0 , d = k;
        for(int i = 1 ; i <= n; i++){
           if( (i % k == (i + k) % k) && (i + k <= n) && (arr[i+k] < arr[i])) swap(arr[i], arr[i+k]);
        }
        for(int i = n ; i > n - k ; i--) sum += arr[i];
        cout<<sum<<"\n";
    }

    return 0;
}
