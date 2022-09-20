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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        rep(i,n) cin>>arr[i];
        cout<<n-1<<endl;
        if(n > 1)
        {
            cout<<"1 "<<n<<endl;
        }
        if((arr[0] + arr[n-1]) % 2 == 0)
        {
            arr[0] = arr[n-1];
        }
        else
        {
            arr[n-1] = arr[0];
        }
        for(int i = 1 ; i < n - 1; i++)
        {
            if((arr[0] + arr[i]) % 2 == 0)
            {
                cout<<i+1<<" "<<n<<"\n";
            }
            else
            {
                cout<<1<<" "<<i+1<<"\n";
            }
        }
    }
    return 0;
}
