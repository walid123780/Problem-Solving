#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n , m;
    cin >> n >> m;
    if(m == 1) cout << 0 << endl;
    else if(n > m - 1) cout << m << endl;
    else cout << n + 1 << endl;
    for(int i = 0; i < min (m - 1,n); i++) {
    	for(int j = 0; j < m; j++) {
    		cout << (j + i) % m << " "; 
    	}
    	cout << "\n";
    }
    if(n > m -1) {
    	for(int i = m - 1; i < n; i++) {
    		for(int j = 0; j < m; j++) {
    			cout << j << " ";
    		}
    		cout << "\n";
    	}
    }
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