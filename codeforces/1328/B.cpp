#include<bits/stdc++.h>
using namespace std;

#define ll long long
int f(ll n){
    ll temp = n * (n + 1);
    return temp / 2;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n , k ;
        cin>>n>>k;
        string s = "";
        for(int i = 0 ; i < n ; i++){
            s += 'a';
        }
        ll i =  1 , up;
        int fB = n - 2 , SB = n - 1;
        for(; ; i++){
            up = f(i);
            if(up >= k) break;
            fB--;
            SB--;
        }
        ll msb = up - k;
        s[fB] = 'b';
        s[msb + SB] = 'b';
        cout<<s<<endl;
    }
    return 0;
}
