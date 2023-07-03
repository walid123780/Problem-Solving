#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int n = s.size();
    string can = "" , had = "";
    int f = 0, ans = 0;
    for(int i = n - 1; i >= 0; i--) {
    	if(s[i] == '0') {
    		can = '0' + can;
    		f += 1;
    	}
    	else {
    		can = s[i] + can;
    		f += 1;
    		if(i == 0) {
    			ans += 1; 
    			continue;
    		}
    		if(i > f) {
    			ans += 1;
    			can = "";
    			f = 0;
    		}
    		else if(i == f && s.substr(0, i) >= can) {
    			ans += 1;
    			can = "";
    			f = 0;
    		} 
    	} 
    }
    cout << ans << endl;
    return 0;
}