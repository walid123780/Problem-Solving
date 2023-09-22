#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    string s = "";
    if(n2 == 0) {
    	if(n1 != 0) {
    		cout << string(n1 + 1 , '0') << "\n";
    	}
    	else cout << string(n3 + 1 , '1') << "\n";
    	return;
    }

    for(int i = 0; i < n2 + 1; i++) {
    	if(i & 1) {
    		s += '0';
    	}
    	else s += '1';
    }
   	s.insert(1 , string(n1 , '0'));
   	s.insert(0 , string(n3 , '1'));
   	cout << s << endl;
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