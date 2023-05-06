#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		int n , k;
		cin >> n >> k;
		std::vector<int> v(n);
		for(int i = 0; i < n; i++) {
			cin >> v[i];	
		} 
		int binaryNumber[100] = {0};
		for(int i = 0; i < n; i++) {
			int x = v[i];
			int j = 0;
			while (x > 0) {
				binaryNumber[j] += x % 2;
				x = x / 2;
				j++;
			}
		}
		
		int ans = 0;
		string s = "";
		for (int j = k - 1; j >= 0; j--) {
			int one = binaryNumber[j];
			int zero = n - binaryNumber[j];
			if(one > zero) s += '1';
			else s += '0';
		}
		// cout << s << endl;
		cout << stoi(s, 0, 2) << endl;
	}
	return 0;
}