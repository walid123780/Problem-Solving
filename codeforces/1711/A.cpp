#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;int j = 2 , i = 1;
		if(n % 2) {
			cout << 1 << " ";
			j = 3 , i  = 2;
		}
		for(; i <= n || j <= n; i += 2 , j +=2 ){
			cout << j  << " " <<  i << " ";
		}
		cout << endl;
	}
	return 0;
}