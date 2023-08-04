#include<bits/stdc++.h>
using namespace std;

#define ll long long
long long lcm(long long a, long long b) {
	return (a / __gcd(a, b)) * b;
}

int main() { 
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;	
	while(t--) {
		int n;
		cin >> n;
		bool not_ok = false; long long LCM = 1;
		for(int i = 0; i < n ; i++) {
			long long l;
			cin >> l;
			LCM = lcm(LCM , i + 2);
			if(l % LCM == 0) {
				not_ok = true;
			}
		}
		if(not_ok == false) { 	  	 	
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
	return 0;
}