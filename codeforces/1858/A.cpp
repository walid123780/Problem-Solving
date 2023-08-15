#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
    	int a , b , c;
    	cin >> a >> b >> c;
    	if(c % 2) {
    		if(a >= b) {
    			cout << "First" << endl;
    		}
    		else cout << "Second" << endl;
    	}
    	if(c % 2 == 0) {
    		if(a > b) {
    			cout << "First" << endl;
    		}
    		else cout << "Second" << endl;
    	}
    }
    return 0;
}