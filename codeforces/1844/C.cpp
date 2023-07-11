#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
    	int n;
    	cin >> n;
    	std::vector<ll> v(n);
    	ll max_element = INT_MIN;
    	for(int i = 0; i < n; i++) {
    		cin >> v[i];
    		max_element = max(max_element , v[i]);
    	}
    	ll mx1 = 0 , mx2 = 0;
    	for(int i = 0; i < n; i += 2) {
    		mx1 = max(mx1 , mx1 + v[i]);
    	}
    	for(int i = 1; i < n; i += 2) {
    		mx2 = max(mx2 , mx2 + v[i]);
    	}
    	ll ans = max(mx2 , mx1);
    	if(ans == 0) {
    		cout << max_element << endl;
    	}
    	else cout << ans << endl;
    }
    return 0;
}