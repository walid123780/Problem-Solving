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
    int n;
    cin>>n;
    int arr[n+1];
    rep(i,n) cin>>arr[i];
    sort(arr,arr+n);
    for(int i = 0; i < n ; i++)
    {
        for(int j = i+1 ; j < n ; j++)
        {
            for(int k = j + 1; k < n; k++)
            {
                if(arr[k] - arr[j] == 1 && arr[j] - arr[i] == 1 )
                {
                    cout<<"YES";
                    return 0;
                }
            }
        }

    }
    cout<<"NO\n";
    return 0;
}
