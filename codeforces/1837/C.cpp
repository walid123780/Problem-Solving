#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
    	string s;
    	cin >> s;
    	int n = s.size() , one = 0;
    	for(int i = 0; i < n; i++) {
    		if(s[i] == '?') {
    			if(one) {
    				cout << 1;
    			}
    			else {
    				cout << 0;
    			}
    			continue;
    		}
    		if(s[i] == '1') one = 1; 
    		else if(s[i] == '0') one = 0; 
    		cout << s[i];
    	}
    	cout << endl;
    }
    return 0;
}