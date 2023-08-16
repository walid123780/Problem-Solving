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
    	std::vector<int> v(n);
    	int Xor = 0;
    	for(int i = 0; i < n; i++) {
    		cin >> v[i];	
    	}
    	sort(v.begin(), v.end());
    	int ans = -1;
    	for(int k = 1; k <= 1024; k++) {
    		std::vector<int> temp(n);
    		for(int i = 0; i < n; i++) {
    			temp[i] = (v[i] ^ k);
    		}
    		sort(temp.begin(), temp.end());
    		bool not_ok = false;
    		for(int i = 0; i < n; i++) {
    			if(temp[i] != v[i]) {
    				not_ok = true;
    				break;
    			}
    		}
    		if(!not_ok) {
    			ans = k;
    			break;
    		}
    	}
    	cout << ans << endl;
    }
    return 0;
}