#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	n = 2 * n;
	std::vector<int> v(n);
	for(int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int i = 0, j = n - 1;
	while(i < j) {
		if(v[i] >= v[j]) {
			cout << "NO" << endl;
			return 0;
		}
		i++ , j--;
	}
	cout << "YES" << endl;

	return 0;
}	