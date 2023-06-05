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
		int n;
		cin >> n;
		std::vector<int> v(n + 1 , 0);
		for(int i = 1; i <= n; i++) {
			int x;
			cin >> x;
			v[x] = i;	
		}	
		if(v[n] < min (v[1] , v[2])) {
			cout << v[n] << " " << min (v[1] , v[2]) << endl;
		}
		else if(v[n] > max (v[1] , v[2])) {
			cout << v[n] << " " << max (v[1] , v[2]) << endl;
		}
		else cout << v[1] << " " << v[2] << endl;
	}
	return 0;
}