#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<int,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define nn             "\n"
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
        int n ,m;
        cin>>n>>m;
        if((n == 1 or m== 1) or (n == 2 && m == 2)) cout<<"1 1"<<endl;
        else if( (n== 2 && m==3 ) or (m ==2 && n == 3)) cout<<"2 2"<<endl;
        else if( n == 3 && m == 3) cout<<"2 2\n";
        else cout<<n<<" "<<m<<endl;
    }
    return 0;

}
