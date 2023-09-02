#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    std::vector<int> v(n);
    for(int i = 0; i < n; i++) {
    	cin >> v[i];
    }
    std::vector<int> t = v;
    sort(t.begin(), t.end());
    int mex = 0;
    for (int i = 0; i < n; i++) {
        if (t[i] == mex) {
          mex += 1;
      }
  }
  v.push_back(mex);
  int ind = k % (n + 1);
  rotate(v.begin(), v.end() - ind , v.end());
  for(int i = 0; i < n; i++) {
    cout << v[i] << " ";
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