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
    int n;
    cin>>n;
    int now = 1;
    for(int  i =1; i <= 10; i++){
        for(int j = 0 ; j <= 9; j++){
            if(now*j > n){
                cout<< now * j - n;
                return 0;
            }
        }
        now *=10;
    }
    return 0;
}
