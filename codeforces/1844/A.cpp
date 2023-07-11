#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
    	int a , b;
    	cin >> a >> b;
    	if(a == 1) {
    		cout << a + b << endl;
    	}
    	else if(a > 1) cout << 1 << endl;
    }
    return 0;
}