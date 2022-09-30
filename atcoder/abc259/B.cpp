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
    int a, b ,d;
    cin>>a>>b>>d;

    double r = hypot(a,b);
    double theta = atan2(b,a);

    theta += d * acos(-1.0) / 180.0;

    double x = cos(theta) * r;
    double y = sin(theta) * r;

    cout<<fixed<<setprecision(10)<<x<<" "<<y<<endl;

    return 0;


}
