#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    bool check[105][105];
    memset(check , false , sizeof(check));
    for(int i = 0; i < n; i++) {
    	int a, b, c, d;
    	cin >> a >> b >> c >> d;
    	for(int j = a; j < b; j++) {
    		for(int k = c; k < d; k++) {
    			check[j][k] = true;
    		}
    	}	
    }
    int ans = 0;
    for(int i = 0; i <= 100; i++) {
    	for(int j = 0; j <= 100; j++) {
    		ans += (check[i][j] == true ? 1 : 0);
    	}
    }
    cout << ans << endl;
}	
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}