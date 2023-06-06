#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
    	int n;
    	cin >> n;
    	string s;
    	cin >> s;
    	char ch = s[0];
    	string ans = "";
    	for(int i = 1; i < n; i++) {
    		if(ch == s[i]) {
    			ans += ch;
    			if( i + 1 < n) {
    				i++;
    				ch = s[i];
    			}
    		}	
    	}
    	cout << ans << endl;
    }
    return 0;
}