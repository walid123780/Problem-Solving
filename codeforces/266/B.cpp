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
    int n, k ;
    cin>>n>>k;
    string s;
    cin>>s;
    int arr[n] = {0};

    for(int i = 0; i < k ; i++)
    {
        string h = s;
        for(int j = 1; j < n; j++)
        {
            if(s[j]=='G' && s[j-1] =='B' )
            {
                swap(h[j],h[j-1]);
            }
        }
        s=h;
    }
    cout<<s<<endl;
    return 0;
}
