#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<string,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define endl             "\n"
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int ans = 0,mx =0,cnt = 0, low = -1;
        for(int i = 0; i < n-1 ; i++)
        {
            if(arr[i] == arr[i+1])
            {
                if(cnt == 0) low = i;
                mx = (mx,i);
                cnt += 1;
            }
        }
        if(cnt == 0 or cnt == 1) cout<<0<<endl;
        else if(mx - low == 1) cout<<1<<endl;
        else cout<<mx - (low+1)<<endl;
    }
    return 0;
}



