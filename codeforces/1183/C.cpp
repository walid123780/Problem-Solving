#include<bits/stdc++.h>
using namespace std;

#define ll long long
bool ok(ll mid ,ll k ,ll n ,ll a, ll b) {
       ll f = (mid * a) + (n - mid) * b;
	   if(f < k) return true;
	   else return false;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
    	ll k , n , a , b;
    	cin >> k >> n >> a >> b;
    	
    	if(k - (n * a) > 0) {
    		cout << n << endl;
    	}
    	else {
    		int l = 0 , r = n , ans = -1;
    		while(l <= r) {
    			ll mid = (l + r) >> 1;
    			if(ok(mid , k , n , a , b)) {
    				ans = mid;
    				l = mid + 1;
    			}
    			else r = mid - 1;
    		}
    		cout << ans << endl;
    	}
    }
    return 0;
}