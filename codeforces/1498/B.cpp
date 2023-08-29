#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n , k;
    cin >> n >> k;
    multiset<int> s;
    for(int i = 0; i < n; i++) {
    	int x;
    	cin >> x;
    	s.insert(x);
    }
    int res = 0;
    while(!s.empty()) {
    	int h = k;
    	while(*s.begin() <= h) {
    		int z = *(--s.upper_bound(h));
    		h -= z;
    		s.erase(s.find(z));
    		if(s.empty()) break;
    	}
    	res++;
    }
    cout << res << endl;
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