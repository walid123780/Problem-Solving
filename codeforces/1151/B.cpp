#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n , m;
	cin >> n >> m;
	int v[n][m];
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> v[i][j];
		}	
	}
	int xor_value = 0;
	std::vector<int> ans(n);
	for(int j = 0; j < n; j++) {
		xor_value = (xor_value ^ v[j][0]);
		ans[j] = 1;
	}	
	if(xor_value == 0) {
		bool check = false;
		for(int i = 0; i < n; i++) {
			for(int j = 1; j < m; j++) {
				if(v[i][0] != v[i][j]) {
					check = true;
					ans[i] = j + 1;
					break;
				}
			}
			if(check) break;
		}
		if(!check) {
			cout << "NIE" << endl;
		}
		else {
			cout << "TAK" << endl;
			for(int i = 0; i < n; i++) {
				cout << ans[i] << " ";	
			}
			cout << endl;
		}
	}
	else {
		cout << "TAK" << endl;
		for(int i = 0; i < n; i++) {
			cout << ans[i] << " ";	
		}
		cout << endl;
	}
	
	return 0;
}