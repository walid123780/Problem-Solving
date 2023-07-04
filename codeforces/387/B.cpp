#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n , m;
	cin >> n >> m;
	std::vector<int> v(n);
	for(int i = 0; i < n; i++) {
		cin >> v[i];	
	}
	std::vector<int> me(m);
	for(int i = 0; i < m; i++) {
		cin >> me[i];
	}
	sort(v.begin(), v.end());
	sort(me.begin(), me.end());
	int ans = 0;
	int i = n - 1 , j =  m - 1;
	while(i >= 0 && j >= 0) {
		if(v[i] > me[j]) {
			ans += 1;
			i--;
		}
		else if(v[i] <= me[j]) {
			i--, j--;
		}
	}
	while(i >= 0) {
		i--;
		ans++;
	}
	cout << ans << endl;	
	return 0;
}