#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
    	ll n;
    	cin >> n;
    	ll ans = (n * (n + 1)) >> 1;
    	for(ll i = 0; i <= 32; i++) {
    		if(pow(2 , i) <= n) {
    			ll f = pow(2 , i);
    			// cout << f << endl;
    			ans -= f;
    			ans -= f;
    		}
    		else break;
    	}
    	cout << ans << endl;
    }
    return 0;
}