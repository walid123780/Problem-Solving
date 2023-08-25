#include<bits/stdc++.h>
using namespace std;


bool isPerfectSquare(long double x) {
    if (x >= 0) {
        long long sr = sqrt(x);        
        return (sr * sr == x);
    }  
    return false;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		std::vector<int> arr(n);
		for(int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int ok = 0;
		for ( auto it : arr) {
			if(isPerfectSquare(it) != true and it != 1) {
				ok += 1;
			}
		}
		if(ok) {
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
	return 0;
}