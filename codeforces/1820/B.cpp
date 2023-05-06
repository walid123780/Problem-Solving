#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		ll n = s.size() , cons = 0 , mx = 0 , allone = 0;
		for(int i = 0; i < n; i++) {
			if(s[i] == '1') allone++;
		}
		if(allone == n || allone == 0) {
			cout << allone * allone << endl;
			continue;
		}
		s += s;
		n = s.size();
		for(int i = 1; i < n; i++) {
			if(s[i-1] == s[i] && s[i] == '1') cons++;
			else {
				mx = max (mx , cons);
				cons = 0;
			}
		}
		mx = max (mx , cons) + 1;
		// cout << "# : " << mx << endl;
		ll f = ((mx / 2) + (mx % 2)) * ((mx / 2) + 1);
	  cout <<  f << endl;
	}
	return 0;
}