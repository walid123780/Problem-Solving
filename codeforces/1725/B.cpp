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
//    int  t;
//    cin>>t;
//    while(t--)
//    {
        ll n , d;
        cin>>n>>d;
        int arr[n+1] = {0};
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ll rem = n , cnt = 0;
        for(int i = n - 1; i >= 0; i--){
            int x = d / arr[i];
            int y = d % arr[i];
            if(y >= 0) x += 1;
            rem -= x;
            if(rem >= 0) cnt++;
        }
        cout<<cnt<<endl;

//    }

    return 0;
}
