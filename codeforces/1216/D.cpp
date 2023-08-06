#include<bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	std::vector<int> v(n);
	int mx = 0 , GCD = 0;
	for(int i = 0; i < n; i++) {
		cin >> v[i];
		mx = max(mx , v[i]); 
		
	}
	long long cost = 0;
	for(int i = 0; i < n; i++) {
		cost += (mx - v[i]);
		GCD = __gcd(GCD , mx - v[i]);
	}
	long long people = cost / GCD;
	 cout << people << " " << GCD << endl;
	
	return 0;
}