#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		for(int i = s.size() - 2; i >= 0; i--) {
			if(s[i + 1] >= '5') {
				if(s[i] != '9') s[i] = (((s[i] - '0') + 1) + '0');
				else {
					int j = i - 1;
					while(j >= 0) {
						if(s[j] != '9') {
							s[j] = (((s[j] - '0') + 1) + '0');
							break;
						}
						j -= 1;
					}
					i = j;
				}
			}
		}
		int pos = -1;
		for(int i = 0; i < s.size(); i++) {
			if(s[i] >= '5') {
				pos = i;
				break;
			}
		}
		if(pos == -1) {
			cout << s << endl;

		}
		else {
			if (pos == 0) cout << 1;
			for(int i = 0; i < s.size(); i++) {
				if(i < pos) cout << s[i];
				else cout << 0;
			}
			cout << endl;
		}


	}
	return 0;
}