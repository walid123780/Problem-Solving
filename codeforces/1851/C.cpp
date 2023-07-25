#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
    	int n , m;
    	cin >> n >> m;
    	std::vector<int> v(n);
    	map<int , int >  mp;
    	for(int i = 0; i < n; i++) {
    		cin >> v[i];
    		mp[v[i]]++;
    	}
    	if(v[0] == v[n - 1] && mp[v[0]] >= m) {
    		cout << "YES" << endl;
    		continue;
    	}
    	if(mp[v[0]] >= m  && mp[v[n - 1]] >= m) {
    		int pos = 0 , cn = 0;
    		for(int i = 0; i < n; i++) {
    			if(v[i] == v[0] && (cn != m)) {
    				cn++;
    				pos = i;
    			}
    		}
    		int pos1 = n - 1, cnt = 0;
    		for(int i = n - 1; i >= 0; i--) {
    			if(v[i] == v[n - 1] && (cnt != m)) {
    				cnt++;
    				pos1 = i;	
    			}
    		}
    		if(pos < pos1) {
    			cout << "YES" << endl;
    		}
    		else cout << "NO" << endl;
    	}
    	else cout << "NO" << endl;
    }
    return 0;
}