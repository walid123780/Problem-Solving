#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n , q;
    cin >> n >> q;
    std::vector<ll> v(n + 1) , pre(n + 1 , 0);
    for(int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    int fst , sec , third;
    for(int i = 1; i <= n; i++) {
        if(i == 1) fst = v[i] , pre[i] = 0;
        else if(i == 2) sec = v[i] , pre[i] = pre[i - 1];
        else {
            third = v[i];
            if(fst >= sec && sec >= third) {
                pre[i] = pre[i - 1] + 1;
            }
            else {
                pre[i] = pre[i - 1];
            }
            fst = sec;
            sec = third;
        }
    }
    while(q--) {
        ll l , r;
        cin >> l >> r;
        if(l < r ) cout << (r - l + 1) - (pre[r] - pre[l + 1]) << "\n";
        else cout << r - l + 1 << "\n";
    }
    return 0;
}