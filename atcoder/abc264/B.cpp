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
#define rep1(i,n)      for(int i=1;i<n;i++)
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
#define mod            1e9 + 7
#define co(n)          cout<<n;
#define ret            return 0
#define valid(nx,ny)   nx>=1 && nx<=row && ny>=1 && ny<=col
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int grid[16][16];

void nice()
{
    int i, j, k, l, m, n;
    for( i = 0 ; i < 8 ; i++)
    {
        for( j = i + 1; j <= 15 - i ; j++)
        {
            if(i % 2 == 0) grid[i][j] = 1;
            else if( i % 2 != 0) grid[i][j] = 0;

        }
        for( k = i; k <= 15 - i ; k++)
        {
            if(i % 2 == 0) grid[k][j] = 1;
            else if( i % 2 != 0) grid[k][j] = 0;
        }
        for( l = k ; l >= i + 1 ; l--)
        {
            if(i % 2 == 0) grid[k][l] = 1;
            else if( i % 2 != 0) grid[k][l] = 0;

        }
        for( m = k; m >= i ; m--)
        {
            if(i % 2 == 0) grid[m][l] = 1;
            else if( i % 2 != 0) grid[m][l] = 0;
        }
    }
    grid[8][8] = 1;
}


int main()
{
    nice();
//    display();
    int n, m;
    cin>>n>>m;
    if(grid[n][m] == 1) cout<<"white\n";
    else cout<<"black\n";
    return 0;
}
