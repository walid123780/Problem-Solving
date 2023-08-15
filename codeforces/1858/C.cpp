#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 69;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		std::vector<long long> v;
		std::vector<bool> check(N , false);
		for(int i = 1; i <= n; i++) {
			long long x = i;
			if(check[x] == false) {
				while(x <= n) {
					v.push_back(x);
					check[x] = true;
					x *= 2;
				}
			}
		}
		for(auto it : v) {
			cout << it << " ";
		}
		cout << endl;
	}
	return 0;
}