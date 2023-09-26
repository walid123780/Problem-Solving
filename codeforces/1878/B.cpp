#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    std::vector<int> v(n + 10, 0);
    v[0] = 2;
    v[1] = 3;
    for(int i = 0; i < n; i++) {
    	v[i] = i + 2;
    }
    for(int i = 2; i < n; i++) {
    	if((v[i - 1] + v[i - 2]) % 3 == 0) {
    		v[i] = max(v[i - 1] , v[i - 2]) + 2;
    	}
    	else v[i] = max(v[i - 1] , v[i - 2]) + 1;
    	
    }
    for(int i = 0; i < n; i++) {
    	cout << v[i] << " ";
    }
    
 
    cout << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
}