#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		int n , k , q;
		cin >> n >> k >> q;
		std::vector<int> v(n);
		int r = 0 , g = 0;
		std::vector<int> fuck;
		for(int i = 0; i < n; i++) {
			cin >> v[i];
			if(v[i] <= q) r++ , g++;
			else {
				if(r!= 0)fuck.push_back(r);
				r = 0;
			} 	
		}
		fuck.push_back(r);
		ll ans = 0;
		for(int i = 0; i < fuck.size(); i++) {
			if(fuck[i] >= k) {
				ll f = fuck[i] - k + 1;
				// cout << f << endl;
				ans += f * (f + 1) >> 1;

			}
		}
		
		cout << ans << endl;

	}
	return 0;
}