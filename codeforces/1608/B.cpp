///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define MP make_pair
#define endl '\n'
#define rep(i,n) for(int i=0;i<n;i++)
#define l1(i,n) for(int i=1;i<=n;i++)
#define per(i,n) for(int i=n-1;i>=0;i--)
#define per1(i,n) for(int i=n;i>=1;i--)
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define max_size 1000001
using namespace std;
typedef vector<int> VI;
typedef vector<long long int> VLL;
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);

/*bool isprime(ll n ){
       for(ll i=2;i*i<=n;i++){
        if(n%i==0)return false;
       }
       return true;
}
*/
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,m,o;
        cin>>n>>m>>o;
        int c=0,i,j;
        if(m+o>n-2 || abs(m-o)>1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            if(m==o)
            {
                int k=m+2;
                cout<<m+1<<endl;
                for(int i=1; i<=m; i++)
                {
                    cout<<k<<" "<<i<<" ";
                    k++;
                }
                for(int i=k; i<=n; i++) cout<<i<<" ";
            }
            else if(m>o)
            {
                int k=n-m;
                for(int i=n; i>n-m; i--)
                {
                    cout<<k<<" "<<i<<" ";
                    k--;
                }
                for(int i=k; i>=1; i--) cout<<i<<" ";
            }
            else
            {
                int k=o+1;
                for(int i=1; i<=o; i++)
                {
                    cout<<k<<" "<<i<<" ";
                    k++;
                }
                for(int i=k; i<=n; i++)cout<<i<<" ";
            }
        }

    }
 cout<<endl;
    return 0;
}




