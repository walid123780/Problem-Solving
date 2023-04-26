#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int mod = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
    	int n;
    	cin >> n;
    	ll ans = 0 , mxi = 1;
    	for(int i = 2; i <= n; i++){
    		mxi *= (i - 1);
    		mxi %= mod;
    	}
    	mxi *= n;
    	mxi %= mod;
    	for(int i = 2; i <= n; i++){
    		int f = i - 1;
    		ans += (mxi * (2 * f));
    		ans %= mod;
    	}
    	cout << ans % mod << endl;
    }
    return 0;
}