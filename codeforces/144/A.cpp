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
    int n, mn = INT_MAX, mx = INT_MIN,posmx = -1, posmn = -1;
    cin>>n;
    int arr[n+1];

    rep(i,n)
    {
        cin>>arr[i];
        if(arr[i] <= mn)
        {
            mn = arr[i];
            posmn = i + 1;
        }
        if(arr[i] > mx)
        {
            mx = arr[i];
            posmx = i + 1;
        }
    }
    if(posmx > posmn) cout<< (posmx - 1) + (n - (posmn + 1)) <<endl;
    else if(posmn > posmx) cout<<n- posmn + (posmx -1)<<endl;
    return 0;
}
