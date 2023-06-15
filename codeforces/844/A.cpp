#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int n;
    cin >> n;
    int len = s.size();
    if(len < n) {
    	cout << "impossible" << endl;
    }
    else {
    	map<char,int>mp;
    	int cnt = 0;
    	for(int i = 0; i < len; i++) {
    		if(mp[s[i]] == 0) cnt++;
    		mp[s[i]]++;
    	}
    	if(cnt < n) cout << n - cnt << endl;
    	else cout << 0 << endl;
    }
    return 0;
}