#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		std::vector<int> v(n);
		for(int i = 0; i < n; i++) {
			cin >> v[i];
		}
		int mxdif = INT_MIN , mx = INT_MIN;
		std::vector<int> x;
		for(int i = 1; i < n; i++) {
			if(v[i] < v[i - 1]) {
				mx = max(mx , v[i - 1]);
				mxdif = max(mxdif, mx - v[i]);
				x.push_back(mxdif);
			}
		}
		int power = 0 , j = 0;
		for(int i = 0; i < x.size(); i++) {
			while(power < x[i]){
				power = pow(2 , (j + 1)) - 1;
				j++;
			}
		}
		cout << j << endl;

	}
	return 0;
}