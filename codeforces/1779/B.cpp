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
    	if(n == 3) {
    		cout << "NO" << endl;
    		continue;
    	}
    	cout << "YES" << endl;
    	if(n % 2 == 0) {
    		for(int i = 1; i <= n; i++) {
    			if(i % 2) cout << 1 << " ";
    			else cout << -1 << " ";
    		}
    	}
    	else {
    		int k = n / 2;
    		for(int i = 1; i <= n; i++) {
    			if(i % 2) cout << k - 1 << " ";
    			else cout << k * (-1) << " ";
    		}
    	}
    	cout << endl;
    }
    return 0;
}