#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int a , b , c, d , ans = 0;
		cin >> a >> b >> c >> d;
		if(b > d) {cout << -1 << endl; continue;}
		int f = (d) - (b);
		a += f;
		b += f;
		if((c - a) > 0) {cout << -1 << endl; continue;}
		else{
			ans = abs(c - a) + f;
			cout << ans << endl;
		}
	}
	return 0;
}