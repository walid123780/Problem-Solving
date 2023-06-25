#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s , t;
	cin >> s >> t; 
	int c = 0 , a;
	if(s.size() == t.size()) {
		for(int i = 0; i < s.size(); i++) {
			if(s[i] != t[i]) {
				if(c ==  0) {
					a = i;
					c = 1;
				}
				else {
					swap(s[a] , s[i]);
					break;
				}
			}
		}
	}
	if(s != t) cout << "NO" << endl;
	else cout << "YES" << endl;
	return 0;
}