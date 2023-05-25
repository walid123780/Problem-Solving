#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		int n , m;
		cin >> n >> m; 	
		// for(int j = 2; j <= 101; j++) {
		// 		for(int x = 2; x <= 100 ; x++) {
		// 			if(x>j) break;
		// 			if(j % x == 0 && (j + 1) % x == 0) cout << x << endl;
		// 		}
		// }
		if(n % 2 == m % 2 ) {
			if(n % m == 0){
				cout << 2 << endl;
				cout << n - 1 << " " << 1 << endl;
			}
			else cout << 1 << endl << n << endl;
		}
		else { 
			if(n % m != 0) cout << 1 << endl << n << endl;
			else cout << 2 << endl  << n - 1 << " " << 1 << endl;
		}

	}
	return 0;
}