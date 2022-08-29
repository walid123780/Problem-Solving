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
//Number theory
//—----------------------------------------------------------------------------------------------------------------------------
//int divisors_cnt[1000000+10]; // gen how many divisors
//void countdivisors()
//{
//    for(int i =1; i <=1000000; i++)
//    {
//        for(int j = i ; j <=1000000; j+=i)
//        {
//            divisors_cnt[j]+=1;
//        }
//    }
//}
//—----------------------------------------------------------------------------------------------------------------------------
//ll lrgexp(ll a, ll b,ll m)   // Large Exponentiation (a^b^c)
//{
//    ll result = 1;
//    while(b)
//    {
//        if(b & 1) result = (result * a ) % m;
//        a = (a * a) % m;
//        b >>= 1;
//    }
//    return result;
//}
//—----------------------------------------------------------------------------------------------------------------------------
//ll binexp(ll a, ll b)   // Binary Exponentiation (a^b)
//{
//    ll result = 1;
//    while(b)
//    {
//        if(b & 1) result = (result * a ) % mod;
//        a = (a * a) % mod;
//        b >>= 1;
//    }
//    return result;
//}
//—----------------------------------------------------------------------------------------------------------------------------
//int lcm(int a, int b) {           // LCM
//  return (a / gcd(a, b)) * b;
//}
//—----------------------------------------------------------------------------------------------------------------------------
//
//
//—----------------------------------------------------------------------------------------------------------------------------
//int gcd(int a, int b)  // GCD
//{
//    if(b == 0)
//        return a;
//    else
//        return gcd(b, a % b);
//}
//—----------------------------------------------------------------------------------------------------------------------------
//#define M 1000000   // Sieve of Eratosthenes
//bool marked[M];
//void sieve(int n) {
//  for (int i = 2; i * i <= n; i++) {
//    if (marked[i] == false) { // i is a prime
//      for (int j = i * i; j <= n; j += i) {
//        marked[j] = true;
// }}}}
//—----------------------------------------------------------------------------------------------------------------------------
//void seiev(int n,int m) //small  Constraints
//{
//    int cnt=0;
//    int ans =0 ;
//    for(ll i=n ; i<=m; i++)
//    {
//            for(int j=2; j*j<=i; j++)
//            {
//                if(i%j==0){
//                    cnt++;
//                    break;
//                }
//            }
//        if(cnt==0 && i!=1){ans++;}
//        cnt = 0;
//    }
//    cout<<ans<<endl;
//}
//
//Bitwise _ Operation
//—------------------------------------------------------------------------------------------------------------------
//int bit_string(int n) // left_ shift bit count ( 3 gives ans 8)
//{
//    for(int i = 1; i <=n; i++)
//    {
//        ans = (ans * 2) % mod;
//    }
//    return ans;
//}
//—----------------------------------------------------------------------------------------------------------------------------
//int findTrailingZeros(int n) // 101010100000 -- ans = 5
//{
//	int count = 0;
//	for (int i = 5; n / i >= 1; i *= 5)
//		count += n / i;
//	return count;
//}
//—----------------------------------------------------------------------------------------------------------------------------
//
//
//Graph
//—------------------------------------------------------------------------------------------------------------------
//int fx[] = {1,-1,0,0};
//int fy[] = {0,0,1,-1};
//using namespace std;
//
//char prince[M][M];
//int d[M][M],vis[M][M];
//void bfs(int n,int m,int s_1,int s_2,int p) // BFS On 4 direction on maze
//{
//    memset(vis,0,sizeof(vis));
//    queue<pii>q;
//
//    vis[s_1][s_2] = 1;
//    q.push(pii(s_1,s_2));
//    int cnt = 1;
//    while(!q.empty())
//    {
//        pii u = q.front();
//        q.pop();
//        for(int i = 0; i < 4; i++)
//        {
//            int tx = u.first + fx [i];
//            int ty = u.second + fy[i];
////            cout<<tx<<" "<< ty<<endl;
//            if(tx >=0 && tx<m && ty >= 0 && ty < n && prince[tx][ty]=='.' && vis[tx][ty] == 0)
//            {
//                q.push(pii(tx,ty));
//                vis[tx][ty] = 1;
//                cnt++;
//            }
//        }
//    }
//    cout<<"Case "<<p<<": "<< cnt<<endl;
//}
//
//
//
//
//
//Direction Array
//—---------------------------------------------------------------------------------------------------------------------------------------------------------
//int fx[]={+1,-1,+0,+0};
//int fy[]={+0,+0,+1,-1};
//
//int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
//int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};
//
//#define valid(nx,ny) nx>=1 && nx<=row && ny>=1 && ny<=col
//int x=5,y=3,row=5,col=5,nx,ny;
//for(int k=0;k<4;k++)
//{
//     int nx=x+fx[k]; //Add fx[k] with current row
//     int ny=y+fy[k]; //Add fy[k] with current col
//     if(valid(nx,ny)
//     {
//          DO SOMETHING;
//     }
//}
//—---------------------------------------------------------------------------------------------------------------------------------------------------------
//while(!q.empty())  // Basic BFS
//    {
//        int u = q.front();
//        q.pop();
//        for(int v : edges[u])
//        {
//            if(color[v] == NOT_VISITED)
//            {
//                q.push(v);
//                if(color[u] == BLACK)
//                {
//                    color[v] = RED ;
//                    red++;
//                }
//                else
//                {
//                    color[v] = BLACK;
//                    black++;
//                }
//            }
//        }
//    }
//—---------------------------------------------------------------------------------------------------------------------------------------------------------
//
//vector<pair<int,int > >edges[M]; /// Basic Dijkastra
//
//int vis[M];
//int dis[M];
//
//int BFS(int s)
//{
//    queue<int>q;
//    q.push(s);
//    dis[s] = 0;
//    vis[s] = 1;
//    while(!q.empty())
//    {
//        int u = q.front();
//        q.pop();
////        cout<<"Under of me "<<u<<endl;
//        for(auto v : edges[u])
//        {
//            if(vis[v.first]==0)
//            {
////                cout<<v.first<<" "<<dis[u]<<endl;
//                dis[v.first] = dis[u] + v.second;
//                q.push(v.first);
//                vis[v.first] = 1;
//            }
//        }
//    }
//}

int main()
{
    string s;
    cin>>s;
    int len = s.size();
    len /= 2;
    cout<<s[len]<<endl;

}



