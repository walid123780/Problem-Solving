#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
    	int n;
    	cin >> n;
    	int  sum = 0 , odd = 0, even = 0;
    	for(int i = 0; i < n ; i++) {
    		int x;
    		cin >> x;
    		sum += x;
    		if(x % 2 == 1) odd++;
    		else even += 1;
    	}
    	if(sum % 2 == 0 and (odd % 2 == 0 and even % 2 == 0) or (odd % 2 == 0 and even % 2 == 1)) {
    		cout << "YES" << endl;
    	}
    	else cout << "NO" << endl;

    }
    return 0;
}