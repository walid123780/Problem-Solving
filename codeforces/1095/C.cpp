#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n , m;
   cin >> n >> m;
   std::vector<int> ans;
   for(int i = 30; i >= 0; i--) {
   		int power = 1 << i;
   		while(n >= power) {
   			n -= power;
   			ans.push_back(power);
   		}
   	}
   	if(ans.size() > m) {
   		cout << "NO\n";
   		return;
   	} 
   	int left = m - ans.size();
   	for (int i = 0 ; i < ans.size() and ans.size() <= m; i++) {
   		while(ans[i] > 1 and ans.size() < m) {
   			ans.push_back(ans[i] / 2);
   			ans[i] /= 2;
   		}
   	}
   	if(ans.size() < m) {
   		cout << "NO\n";
   		return;
   	}
 	cout << "YES\n";
 	for(auto it : ans) {
 		cout << it << " ";
 	}  
 	cout << "\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}

