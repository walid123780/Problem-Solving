#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
     if(n == 2 || n == 3) {
    	cout << -1 << "\n";
    	return;
    }
    if(n == 4) {
    	cout << "3 1 4 2\n";
    	return;
    }
    std::deque<int> odd , ans;
    for(int i = 1; i <= n; i++) {
    	if(i % 2 == 1 and i != 5) odd.push_back(i);
    	if(i % 2 == 0) ans.push_back(i);
    }
    ans.push_front(5);
   	for(auto it : odd) {
   		ans.push_front(it);
   	}
   	for(auto it : ans) {
   		cout << it << " ";
   	}
   	cout << "\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
}