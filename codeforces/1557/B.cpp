#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int n, k;
    cin >> n >> k;
    std::vector<pair<int, int>> v(n);
    for(int i = 0; i < n; i++) {
      int x;
      cin >> x;
      v[i] = {x, i};
    }
    int ans = 0;
    sort(v.begin(), v.end());
    for(int i = 1; i < n; i++) {
      ans += v[i].second != v[i - 1].second + 1;
    }
    if(ans < k) {
      cout << "Yes\n";
    }
    else cout << "No\n";
  } 
  return 0;
}