#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<int,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
//    optimize();
    int n;
    string s;
    cin>>n>>s;
    int x = 0, y = 0, ans = 0;
    for(auto t : s) x +=t=='x', y+=t=='X';
    for(int i = 0 ; i < n ; i++){
        if(s[i] == 'x' && x > y) s[i] = 'X' , x--,y++,ans++;
        if(s[i] == 'X' && x < y) s[i] = 'x' , x++,y--,ans++;
    }
    cout<<ans<<"\n"<<s;
    return 0;
}
