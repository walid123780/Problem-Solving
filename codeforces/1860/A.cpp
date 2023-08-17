#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {

		string s ;
		cin >> s;
		int sz = s.size();
		int st = 0 , end = 0;
		for(int i = 0; i < sz; i++) {
			if(s[i] == '(') st++;
			else if(s[i] == ')' and st != 0) st--;
			else {
				end++;
			}
		}
		if(s == "()") {
			cout << "NO" << endl;
		}
		else {
			cout << "YES" << endl;
			string ans = "" , ans1 = "";
			for(int i = 0; i < sz; i++) {
				ans += "()";
				ans1 = "(" + ans1 + ")";
			}	
			int f = 0;
			for(int i = 0; i < ans.size() - sz + 1; i++) {
				string temp = ans.substr(i , sz);
				if(temp == s) {
					f = 1;
					break;
				}
			}
			if(f == 1) {
				cout << ans1 << endl;
			}
			else {
				cout << ans << endl;
			}

		}
	}

	return 0;
}