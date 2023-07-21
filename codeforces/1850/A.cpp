#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
    	int n = 3;
    	std::vector<int> v(n);
    	for(int i = 0; i < n; i++) {
    		cin >> v[i];
    	}
    	sort(v.begin(), v.end());
    	if(v[1] + v[2] >= 10) {
    		cout << "YES" << endl;
    	}
    	else cout << "NO" << endl;
    }
    return 0;
}