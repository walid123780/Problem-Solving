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
        if(n==3)
        {
            cout<<"-1\n";
            continue;
        }
        int arr[n+1] = {0};
        int j = 1;
        for(int i = 3; i <= n; i++,j++)
        {
            arr[i] = j;
        }
        arr[1] = n;
        arr[2] = n-1;

        for(int i = 1; i <= n; i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}
