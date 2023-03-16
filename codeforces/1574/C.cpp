#include<bits/stdc++.h>
using namespace std;

#define ll long long 
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
    // cin>>t;
	while(t--){
		int n;
		cin >> n;
		ll sum = 0;
		std::vector<ll> v(n  , 0);
		for(int i = 0; i < n; i++){
			cin >> v[i];
			sum += v[i];
		}
		sort(v.begin(), v.end());
		int q;
		cin >> q;
		while(q--) {
			ll a , d , ans = LLONG_MAX;
			cin >> a >> d;
			auto it =  lower_bound(v.begin(), v.end() , a);
			if(it != v.end()){
				ll baki = sum - *it;
				ans = min(ans , max(0LL , d - baki));
			}
			if(it != v.begin()){
				it--;
				ll tmp = a - *it;
				ll baki = sum - *it;
				ans = min(ans , tmp + max(0LL , d - baki));
			}
			cout << ans << endl;
		}
	}
	return 0;
} 