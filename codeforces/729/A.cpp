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
    cin>>n;
    string s;
    cin>>s;
    string f ="";
    for(int i = 0; i < n; )
    {
        if(i+2 >= n || s[i] != 'o' || s[i+1] != 'g' || s[i+2] != 'o')
        {
            f += s[i];
            i++;
            continue;
        }
        f += "***";
        i++;
        while(i + 1 < n && s[i] == 'g' && s[i+1] == 'o') i += 2;
    }
    cout<<f<<"\n";
    return 0;
}
