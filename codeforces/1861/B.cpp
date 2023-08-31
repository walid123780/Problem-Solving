#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s, t;
    cin >> s >> t;
    int n = s.size();
    std::vector<int> v(n);
    for(int i = 0; i < n; i++) {
    	v[i] = (s[i] - '0') + (t[i] - '0');
    }
    bool not_ok = true;
    for(int i = 1; i < n; i++) {
    	if(v[i] == 2 and v[i - 1] == 0) {
    		not_ok = false;
    	}
    }
    if(!not_ok) {
    	cout << "YES\n"; 
    }
    else cout <<  "NO\n";
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