#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    std::vector<int> v(n);
    for(int i = 0; i < n; i++) {
    	cin >> v[i];	
    }

    string s; cin >> s;
    int q; cin >> q;

    int pre[n + 1] = {0};
    for (int i = 0; i < n; i++) {
    	pre[i + 1] = pre[i] ^ v[i];
    }

    int Xor0 = 0 , Xor1 = 0;
    for(int i = 0; i < n; i++) {
    	Xor1 ^= (s[i] == '0' ? 0 : v[i]);
    	Xor0 ^= (s[i] == '1' ? 0 : v[i]);
    }

    while(q--) {
    	int t;
    	cin >> t;

    	if(t == 1) {
    		int l , r;
    		cin >> l >> r;
    		
    		Xor0 ^= (pre[r] ^ pre[l - 1]);
    		Xor1 ^= (pre[r] ^ pre[l - 1]);
    	}
    	else {
    		int g;
    		cin >> g;
    		if(g == 0) {
    			cout << Xor0 << " ";
    		}
    		else if(g == 1) {
    			cout << Xor1 << " ";
    		}
    	}
    }
    cout << "\n"; 
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