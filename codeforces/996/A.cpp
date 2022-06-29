#include<bits/stdc++.h>
using namespace std;
#define ll long long
//#define MIN -100000
int main()
{
    ll n,cnt=0;
    cin>>n;
    if(n/100>0){
        ll cop=n%100;
        cnt=cnt+(n/100);
        n=cop;
    }
     if(n/20>0){
        ll cop=n%20;
        cnt=cnt+(n/20);
        n=cop;
    }
     if(n/10>0){
        ll cop=n%10;
        cnt=cnt+(n/10);
        n=cop;
    }
    if(n/5>0){
        ll cop=n%5;
        cnt=cnt+(n/5);
        n=cop;
    }
    if(n/1>0){
        ll cop=n%1;
        cnt=cnt+(n/1);
        n=cop;
    }
    cout<<cnt<<endl;
    return 0;
}
