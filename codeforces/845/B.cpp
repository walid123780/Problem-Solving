#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	int l = 0 , r = 0;
	std::vector<int> a , b;
	for(int i = 0; i < s.size(); i++) {
		if(i < 3)  {
			l += s[i] - '0';
		}
		else {
			r += s[i] - '0';
		}
	}
	if(l == r) {
		cout << 0 << endl;
		return 0;
	}
	if(l < r) {
		for(int i = 0; i < s.size(); i++) {
			if(i < 3)  {
				a.push_back(s[i] - '0');
			}
			else {
				b.push_back(s[i] - '0');
			}
		}
	}
	else if(r < l) {
		for(int i = 0; i < s.size(); i++) {
			if(i < 3)  {
				b.push_back(s[i] - '0');
			}
			else {
				a.push_back(s[i] - '0');
			}
		}
	}
	
	int f = abs(l - r); 
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	int cnt = 0 , tm = f , ff = f;
	std::vector<int> gre;
	for(int i = b.size() - 1; i >= 0; i--) {
		if(f <= 0) break;
		f -= b[i]; 
		gre.push_back(b[i]); 
	}
	int cn = 0;
	for(int i = 0; i < a.size(); i++) {
		if(tm <= 0) break;
		tm -= (9 - a[i]); 
		gre.push_back((9 - a[i])); 	
	}
	sort(gre.begin(), gre.end());
	int ans = 0;
	for(int i = gre.size() - 1; i >= 0; i--) {
		// cout << ff << " " << gre[i] << endl;;
		if(ff <= 0) break;
		ff -= gre[i];
		ans++;

	}
	cout << ans << endl;
	return 0;
}