#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
    	int n;
    	cin >> n;
        if(n == 1) {
            cout << 1 << endl;
            continue;
        }
    	if(n % 2) {
    		cout << -1 << endl;
    	}
    	else {
    		int f = 1;
    		for(int i = n , j = 1; j <= n || i > 0;) {
    			if(f % 2) {
    				cout << i << " ";
    				i -= 2;
    			}
    			else {
    				cout << j << " ";
    				j += 2;
    			}
    			f += 1;
    		}
    		cout << endl;
    	}

    }
    return 0;
}