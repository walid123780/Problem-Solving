#include <bits/stdc++.h>
using namespace std;

#define ll long long
const long long LIMIT = 1e15 + 69;
void solve() {
    int n , p;
    cin >> n >> p;
    std::vector<int> v(n);
    int mx = INT_MIN;
    for(int i = 0; i < n; i++) {
    	cin >> v[i];	
    	mx = max(mx , v[i]);
    }
    long long l = (ll) mx , r = LIMIT , ans = 0;
    while(l <= r) {
    	long long mid = (l + r) / 2;
    	long long sum = v[0] , line = 1;
    	for(int i = 1; i < n; i++) {
    		if(sum + v[i] + 1 <= mid) {
    			sum += v[i] + 1;
    		} 
    		else {
    			sum = v[i];
    			line += 1;
    		}
    	}
    	if(line <= p) {
    		r = mid - 1;
    		ans = mid;
    	}
    	else l = mid + 1;
    }
    cout << ans << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}