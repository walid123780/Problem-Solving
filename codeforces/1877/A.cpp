#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    std::vector<int> v(n);
    int sum = 0;
    for(int i = 0; i < n - 1; i++) {
      cin >> v[i];
      sum += v[i]; 
    }
    if(sum >= 0) cout << -sum << endl;
    else cout << abs(sum) << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
}