#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		ll n , k;
		cin >> n >> k;
		if(k > 35) {
			cout << n + 1 << endl;
			continue;
		}
		cout << min (n + 1 , 1LL << k) << endl;
	}
	return 0;
}