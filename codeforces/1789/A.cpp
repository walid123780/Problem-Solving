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
		cin>>n;
		std::vector<int> v(n);
		int gcd = 0;
		for(int i = 0 ; i < n ; i++){
			cin>>v[i];
			gcd = __gcd(gcd , v[i]);
		}
		if(gcd > n) {cout << "NO" <<endl; continue;} 
		else{
			int f = 0;
			for(int i = 0; i < n; i++){
				for(int j = 0 ; j < n ; j++){
					if(i == j) continue;
					if(__gcd(v[i] , v[j]) <= 2) f = 1;
				}
			}
			if(f) cout<< "YES" << endl;
			else cout<< "NO" <<endl;
		}
	}
	return 0;
}