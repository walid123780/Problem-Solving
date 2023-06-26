#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int n , k;
double v[N];
bool valid (double mid) {
	double add = 0.0 , sub = 0.0;
	for(int i = 0; i < n; i++) {
		if(v[i] < mid) {
			add += mid - v[i];
		}
		else sub += v[i] - mid;
	}
	sub = sub - sub * k / 100.0;
	if(sub > add) return true;
	else return false;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> k;
	for(int i = 0; i < n; i++) {
		cin >> v[i];	
	}
	double l = 0.0 , h = 1000.0 , ans;
	for(int i = 0; i < 100; i++) {
		double mid = (l + h) / 2;
		if(valid(mid)) {
			l = mid;
			ans = mid;
		}
		else h = mid;
	}
	cout << fixed << setprecision(9) << ans << endl;
	return 0;
}