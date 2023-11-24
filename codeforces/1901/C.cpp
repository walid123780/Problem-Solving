#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    std::vector<int> v(n);
    for(int i = 0; i < n; i++) {
      cin >> v[i];
    }
    sort(v.begin(), v.end());
    int mx = v[n - 1], mn = v[0];
    std::vector<int> ans;
    while(mx > mn) {
      ans.push_back(mn);
      mx += mn;
      mx >>= 1;
    } 
    cout << ans.size() << "\n";
    if(ans.size() <= n) {
      for(auto it : ans) cout << it << " ";
    }
  cout << "\n";
  } 
return 0;
}