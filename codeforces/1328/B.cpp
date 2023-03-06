#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n , k ;
        cin>>n>>k;

        ll x = floor ((1.0 + sqrt(1 + 8 * k)) / 2.0);
        ll p = x * (x - 1) / 2;
        if(p > k) x--;
        else if(p < k) x++;
        x--;
        p = x * (x - 1) / 2;
        ll y = k - p;

        ll p1 = n - x;
        ll p2 = n - y + 1;
        for(int i = 1 ; i <= n; i++){
            if(i!=p1 && i != p2)cout<<'a';
            else cout<< 'b';
        }
        cout<< endl;

    }
    return 0;
}
