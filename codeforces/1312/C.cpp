#include <bits/stdc++.h>
using namespace std;

const long long LIMIT = 1e16;
void solve() {
    int n, k;
    cin >> n >> k;
    std::vector<long long> power = {1};
    while(true) {
    	power.push_back(power.back() * k);
    	if(power.back() > LIMIT) break;
    }
    int m = power.size();
    vector<int> freq(m , 0); 
    for(int i = 0; i < n; i++) {
    	long long v;
    	cin >> v;
    	for(int j = 0; power[j] <= v and j + 1 < m; j++) {  		
    		if(v % power[j + 1] != 0) {
    			freq[j]++;
    			v -= power[j];
    		}
    	}
    	if(v != 0) {
    		freq[0] += 2;
    	}	
    }
    bool fail = false;
    for(auto it : freq) {
    	if(it > 1) fail = true;
    }
    cout << (fail ? "NO" : "YES") << "\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}