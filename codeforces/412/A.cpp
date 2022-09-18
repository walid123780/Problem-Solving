#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<int,int>
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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(k == 1 || n-k >= k)
    {
        int  mo = k-1;
        while(mo--)
        {
            cout<<"LEFT\n";
        }
        for(int i = 0 ; i < n; i++)
        {
            cout<<"PRINT "<<s[i]<<"\n";
            if(i != n-1) cout<<"RIGHT\n";
        }
    }
    else if(n - k < k || k == n)
    {
        int mo = n-k;
        while(mo--)
        {
            cout<<"RIGHT\n";
        }
        for(int i = n-1 ; i >= 0; i--)
        {
            cout<<"PRINT "<<s[i]<<"\n";
            if(i != 0)cout<<"LEFT\n";

        }
    }
    return 0;
}
