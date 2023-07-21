#include<bits/stdc++.h>
using namespace std;

#define ll long long 
typedef __int128 lll;
const ll MAX = 1e9 + 7;
lll fun (vector<int> const &a , int w) {
	lll ans = 0;
	for(auto it : a) {
		ans += 1LL * (it + 2 * w) * (it + 2 * w) ;
	}
	return ans;
}
int main()
{
	int t = 1;
	cin >> t;
	while(t--) {
		int n; ll m;
		cin >> n >> m;
		std::vector<int> v(n);
		for(int i = 0; i < n; i++) {
			cin >> v[i];
		}
		int l = 0 , r = MAX;
		while(l <= r) {
			ll mid = (l + r) >> 1;
			if(fun(v , mid) >= m){
				r = mid - 1;
			}
			else l = mid + 1;
		}
		cout << l << endl;
	}
	return 0;
}