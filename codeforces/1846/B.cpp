#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
    	string s[8];
    	for(int i = 0; i < 3; i++) {
    		string x;
    		cin >> x;
    		s[i] = x;
    	}
    	for(int i = 0; i < 3; i++) {
    		string x;
    		for(int j = 0; j < 3; j++) {
    			x += s[j][i];
    		}
    		s[i + 3] = x;
    	}
    	string x;
    	for(int i = 0 , j = 0; i < 3; i++ , j++) {
    		x += s[i][j];
    	}
    	s[6] = x; x = "";
    	for(int i = 0 , j = 2; i < 3; i++ , j--) {
    		x += s[i][j];
    	}
    	s[7] = x;
    	int ok = 0;
    	for(int i = 0; i < 8; i++) {
    		// cout << s[i] << endl;
    		int f = 0;
    		if(s[i] == "OOO") {
    			cout << "O" << endl;
    			ok = 1;break;
    		}
    		else if(s[i] == "+++") {
    			cout << "+" << endl;
    			ok = 1;break;
    		}
    		else if(s[i] == "XXX") {
    			cout << "X" << endl;
    			ok = 1;break;
    		}
    	}
    	if(!ok) {
    		cout << "DRAW" << endl;
    	}
    }
    return 0;
}