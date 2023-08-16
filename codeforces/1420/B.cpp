#include<bits/stdc++.h>
using namespace std;

const long long inf = 1e18;
int msb(int N) {
    return N ? 32 - __builtin_clz(N) : -inf;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
    	int n;
    	cin >> n;
    	std::vector<int> v(n);
    	set<int > s;
    	for(int i = 0; i < n; i++) {
    		cin >> v[i];	
    		s.insert(v[i]);
    	}
    	long long ans = 0;
    	std::vector<int> check(32 , 0);
    	for(int i = 0; i < n; i++) {
    		ans += check[msb(v[i])]++;
    	}
    	cout << ans << endl;
    }
    return 0;
}