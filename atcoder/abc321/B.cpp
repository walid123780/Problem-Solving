#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, val;
    cin >> n >> val;
    std::vector<int> v(n - 1);
    for(int i = 0; i < n - 1; i++) {
    	cin >> v[i];	
    }
    for(int i = 0; i <= 100; i++) {
    	std::vector<int> t = v; t.push_back(i);
    	sort(t.begin(), t.end());
    	long long sum = 0;
    	for(int j = 1; j < t.size() - 1; j++) {
    		sum += t[j];
    	}
    	if(sum >= val) {
    		cout << i << endl;
    		return;
    	}
    }
    cout << -1 << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}