#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	std::vector<pair<int, int>> v(n);
	for(int i = 0; i < n; i++) {
		cin >> v[i].first >> v[i].second;
	} 
	sort(v.begin(), v.end());
	int q = 0;
	int tv1 = -1 , tv2 = -1;
	for(int i = 0; i < n; i++) {
		if(v[i].first - 1 >= tv1) {
			tv1 = v[i].second;
			q++;
		}
		else if(v[i].first - 1 >= tv2) {
			tv2 = v[i].second;
			q++;
		}
	}
	if(q == n) {
		cout << "YES" << endl;
	}
	else cout << "NO" << endl;
	return 0;
}