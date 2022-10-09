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
        std::vector<int >::iterator index;
        vector<int >b(n,0);
        int a[n+1] = {0},d[n+1] = {0},e[n+1] = {0};
        for(int i = 0 ; i < n ; i++)cin>>a[i];
        for(int i = 0 ; i < n ; i++)cin>>b[i];
        for(int i = 0 ; i < n ; i++)
        {
            int c = a[i];
            index = lower_bound(b.begin(),b.end(),c);
            d[i] = b[index - b.begin()];
            cout<<b[index - b.begin()] - a[i]<<" ";
        }
        cout<<endl;
        e[n-1] = b[n-1];
        for(int i = n - 2; i >= 0; i--)
        {
            if(a[i+1] <= b[i]) e[i] = e[i+1];
            else e[i] = b[i];
        }
        for(int i = 0; i < n ; i++){
            cout<<e[i] - a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
