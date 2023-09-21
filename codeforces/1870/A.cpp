#include <bits/stdc++.h>
using namespace std;

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
	int n, k, x;
	cin >> n >> k >> x;
	int f = k - 1;
	if(k > n or f > x) cout << "-1" << endl;
	else {
		int sum = 0;
		for(int i = 0; i <= f; i++) {
			sum += i;
		}
		
 		if(x != k) sum += (x * (n - k));
 		else sum += (f * (n - k));
 		cout << sum << endl;
	}
} 
	return 0;
}