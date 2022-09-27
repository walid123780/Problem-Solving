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
    int t;
    cin>>t;
    while(t--)
    {
        int n,value = 0 ,mn =INT_MAX;
        cin>>n;
        int arr[n+1]={0};
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for(int i = n-1 ; i >= 0; i--)
        {
            if(arr[i] > 0){
                int x = i - arr[i];
                mn = min(mn,x);
                if(mn == x)
                value = arr[i];
            }
            if(value > 0)
            {
                arr[i] = 1;
                value--;
            }
        }
        output(arr,n);
        cout<<endl;
    }
    return 0;

}
