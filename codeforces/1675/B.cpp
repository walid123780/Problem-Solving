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

int  main()
{
    fast;
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt =0, x = INT_MIN, c =0;
        cin>>n;
        ll arr[n+2];
        for(ll i = 0; i < n ; i++)
        {
            cin>>arr[i];
            if(arr[i] > x)
            {
                x = arr[i];
                c++;
            }
        }
        if(c == n)
        {
            cout<<0<<endl;
            continue ;
        }

      ll red = 0;
        for(ll j = n-2 ; j >= 0 ; j--)
        {
            while(arr[j] >= arr[j+1] && arr[j] > 0)
            {
                arr[j] /= 2;
                cnt++;
            }
            if(arr[j] == arr[j+1]){
                red = 1;
            }
        }
        if(red  == 1) cout<<"-1"<<endl;
        else cout<<cnt<<endl;
    }
    return 0;
}
