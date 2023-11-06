#include <bits/stdc++.h>
using namespace std;

int abs_distance(int x1, int y1, int x2, int y2) {
  return abs(x1 - y1) + abs(x2 - y2);
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    n *= 2;
    std::vector<int> v(n);
    for(int i = 0; i < n; i++) {
      cin >> v[i]; 
    }
    sort(v.begin(), v.end());
    int ans = 0; 
    std::vector<pair<int, int>> pr;
    for(int i = 0, j = n/ 2 ; j < n - 1; i += 1, j += 1) {
      ans += abs_distance(v[i], v[i + 1], v[j], v[j + 1]);
      pr.push_back({v[i], v[j]});
      if(j + 1 == n - 1) pr.push_back({v[i + 1], v[j + 1]});
    }
    cout << ans << endl;
    for(auto it : pr) {
      cout << it.first << " " << it.second << endl;
    }
  }
  return 0;
}