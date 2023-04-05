#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin >> n;
		int a , b,  c,  d , mn = INT_MAX;
		cin >> a >> b >> c >> d;
		int x1 = min({a ,n - a + 1 , b , n - b + 1});
		int x2 = min({c, n - d + 1 , d , n - c + 1});
		cout << abs(x1 - x2) << endl;
		
	}
	return 0;
}