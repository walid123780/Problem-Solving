#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	std::vector<long long> list;
	for(int i = 1; i < 31; i++) {
		long long product = 1 , n = i;
		while(n) {
			product *= 2;
			n--;
		}
		list.push_back(product - 1);
	}
	int t;
	cin>>t;
	while(t--){
		int n;
		cin >> n;
		if(n == 1) {
			cout << 0 << endl;
			continue;
		}
		int ans = n;
		int index = lower_bound(list.begin(),list.end(), n) - list.begin() - 1;
		cout << list[index] << endl;
	}
	return 0;
} 	 	