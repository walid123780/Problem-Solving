#include<bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b) {
	return (a / __gcd(a, b)) * b;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long n, a, b, p, q;
	cin >> n >> a >> b >> p >> q;
	long long  LCM = lcm(a , b); 
	long long get = 0;
	if(p >= q) {
		get = n / a;
		long long overlep = n / LCM;
		get *= p;
		get += ((n / b) - overlep) * q;
	}
	else {
		get = n / b;
		long long  overlep = n / LCM;
		get *= q;
		get += ((n / a) - overlep) * p;
	}
	cout << get << endl;

	return 0;
}