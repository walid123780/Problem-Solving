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
    int n , cnt = 0 ;
    cin>>n;
    int h , m;
    cin>>h>>m;
    if((h % 10 == 7) or (m % 10 == 7)){cout<<"0"; return 0;}
    ll time = h * 60;
    time += m;
    while(1){
        if(time - n < 0) time = 1440 + time;
        time -= n;
        cnt++;
        int hh = time / 60;
        int mm = time % 60;
        hh %= 24;
//        cout<<cnt <<" :"<<hh<<" "<<mm<<endl;
        if((hh % 10 == 7) or (mm % 10 == 7)){cout<<cnt; return 0;}
    }
    return 0;
}
