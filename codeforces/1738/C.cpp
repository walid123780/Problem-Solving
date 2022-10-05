#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<int,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define str_unique     s.resize(unique(s.begin(), s.end()) - s.begin());
#define str_unique1    s.erase(unique(s.begin(),s.end()),s.end());
#define int_length(x)  to_string(x).length()
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
        int n , odd=0,even=0;
        cin>>n;
        int arr[n+1];
        rep(i,n)
        {
            cin>>arr[i];
            if(arr[i] % 2) odd++;
            else even++;
        }
        if(odd % 4 == 2) cout<<"Bob\n";
        else if(odd % 4 == 1 && even % 2 == 0) cout<<"Bob\n";
        else cout<<"Alice\n";
    }
    return 0;
}
