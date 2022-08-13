///*BISMILLAHIR RAHMANIR RAHIM*///
/**
 *    author:  Ashik Billah Walid
**/
#include <bits/stdc++.h>
#define ll             long long int
#define ulli           unsigned long long int
#define li             long int
#define ci(n)          cin>>n;
#define tc             int t; cin>>t;
#define vi             vector<int>
#define pii            pair<int,int>
#define mi             map<int,int>
#define w(t)           while(--t >= 0)
#define clr_1(x)       memset(x,-1,sizeof(x));
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define ff(i,a,b)      for(int i=a;i<=b;i++)
#define fb(i,b,a)      for(int i=b;i>=a;i--)
#define rep(i,n)       for(int i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define per(i,n)       for(int i=n-1;i>=0;i--)
#define per1(i,n)      for(int i=n;i>=1;i--)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define l(s)           s.length()
#define pb             push_back
#define lb             lower_bound
#define up             upper_bound
#define sa(a,n)        sort(a,a+n)
#define sv(v)          sort(v.begin(),v.end())
#define cy             cout<<"YES\n"
#define cn             cout<<"NO\n"
#define nl             cout<<"\n"
#define minus          cout<<"-1\n";
#define mod            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    int pond, n, ans = 0;
    cin>>pond>>n;
    int arr[n+10] ={0};
    for(int i = 0; i < n ; i++)
    {
        cin>>arr[i];
    }
    int pop = arr[0],l=0;
    int gen[n+10]={0};
    for(int i = n-1 ; i >= 0; i--)
    {
        if(i == n - 1) gen[l++] = pop + abs(pond - arr[i]);
        else gen[l++] = abs(arr[i]- arr[i+1]);
    }
    int mx = *max_element(gen,gen+l);
    int flag = 0;
    for(int i = 0 ; i < l ; i++)
    {
        if(gen[i] == mx && flag == 0)
        {
            flag = 1;
            continue;
        }
        else ans = ans + gen[i];
    }
    cout<<ans<<endl;

}
