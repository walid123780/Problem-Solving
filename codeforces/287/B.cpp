#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll n , k;
bool ok(ll mid) {
    ll have = (k * (k + 1)) >> 1;
    ll left = (mid * (mid - 1)) >> 1;
    ll cal = have - left;
    // cout << cal  << " " << mid << endl;
    if(cal + 1 >= n) return true;
    return false;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    if(n == 1) {
        cout << 0 << endl;
        return 0;
    }
    k--;
    ll l = 0 , r = k, ans = -1;
    while(l <= r) {
    	ll mid = (l + r) >> 1;
        if(ok(mid)) {
            ans = max(ans ,mid);
            l = mid + 1;
        }
        else r = mid - 1;
    }
    cout << (ans != -1 ? k - ans + 1 : -1) << endl;;    
    return 0;
}