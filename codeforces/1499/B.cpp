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
        string s;
        cin>>s;
        int i = s.find("11");
        int j = s.rfind("00");
        cout<<(i != -1 && j != -1 && i < j ? "NO" : "YES")<<endl;
    }
    return 0;

}
