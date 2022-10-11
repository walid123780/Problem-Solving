#include <bits/stdc++.h>
using namespace std;

#define ll            long long int
#define pii            pair<int,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define str_unique     s.resize(unique(s.begin(), s.end()) - s.begin());
#define str_unique1    s.erase(unique(s.begin(),s.end()),s.end());
#define ll_length(x)   to_string(x).length()
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
        int arr[n+1] = {0},b[n+1]= {0};
        for(int i = 1; i <= n; i++)
        {
            cin>>arr[i];
            b[i] = arr[i];
            arr[i] = arr[i-1] + arr[i];
        }
        int red = 0;
        for(int i = 1; i < n ; i++)
        {
            if((arr[i] * 2) >= arr[i+1] && (arr[i] - b[i+1]) >= 0 && b[i+1]!=0)
            {
                red = 1;
                break;
            }
        }
        if(red == 1) cout<<"-1";
        else
        {
            for(int i = 1; i <= n ; i++) cout<<arr[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}
