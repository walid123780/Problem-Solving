#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<string,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    fast;
//    optimize();
    int h , m;
    char ch;
    cin>>h>>ch>>m;
    int a;
    cin>>a;
//    a %= 60;
    h *= 60;
    h += (m + a);
    m = h % 60;
    h /= 60;
    h %= 24;
    if(h < 10)cout<<"0";
    cout<<h<<ch;
    if(m < 10)cout<<"0";
    cout<<m;



    return 0;
}
