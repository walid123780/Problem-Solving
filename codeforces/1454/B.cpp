#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<string,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define cmp(i,n)       for(int i=1;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans = INT_MAX , pos =-1;
        cin>>n;
        map<int ,int>mp;
        int arr[n+1];

        rep1(i,n)
        {
            int x;
            cin>>x;
            arr[i] = x;
            mp[x]++;
        }
        rep1(i,n)
        {
            if(mp[arr[i]] == 1){
                if(ans > arr[i]){
                    ans = arr[i];
                    pos = i;
                }
            }
        }
        cout<<pos<<endl;
    }


    return 0;
}
