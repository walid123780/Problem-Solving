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
    	std::vector<int> v(n) , c(n);
    	for(int i = 0; i < n; i++) {
    		cin >> v[i];
    		c[i] = v[i];
    	}
    	int ok = 0;
    	sort(v.begin(), v.end());
    	for(int i = 0; i < n; i++) {
    		if(c[i] % 2 != v[i] % 2) {
    			ok = 1 ;
    			break;
    		}
    	}
    	if(ok) cout << "NO" << endl;
    	else cout << "YES" << endl;
    }
    return 0;
}