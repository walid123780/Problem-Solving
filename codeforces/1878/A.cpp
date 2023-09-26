#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n , k;
    cin >> n >> k;
    std::vector<int> v(n);
    int f = 0;
    for(int i = 0; i < n; i++) {
    	cin >> v[i];
    	if(v[i] == k) {
    		f = 1;
    	}	
    }
    if(f) cout << "YES\n";
    else cout<< "NO\n"; 
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