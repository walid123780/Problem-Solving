#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string s;
    cin >> s;
    map< char , int > mp;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
		s[i] = toupper(s[i]);
		if(!mp[s[i]]) cnt++;
		mp[s[i]]++;
    }
    // cout << cnt << endl;
    if(cnt == 26) {
    	cout << "YES" << endl;
    }
    else cout << "NO" << endl;
    return 0;
}