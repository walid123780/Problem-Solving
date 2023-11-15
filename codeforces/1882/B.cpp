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
    set<int> s;
    std::vector<int> v[n];
    map<int, vector<int>> mp;
    for(int i = 0; i < n; i++) {
      int m;
      cin >> m;
      for(int j = 0; j < m; j++) {
        int x;
        cin >> x;
        v[i].push_back(x);
        mp[x].push_back(i);
        s.insert(x);
      }
    }
    int ans = 0;
    for(auto it : s) {
      std::vector<bool> ok(n, false);
      for(auto u : mp[it]) {  
        ok[u] = true;
      } 
      set<int> se;
      for(int i = 0; i < n; i++) {
        if(ok[i]) continue;
        for(auto it1 : v[i]) {
          se.insert(it1);
        } 
      }
      int mx = se.size();
      ans = max(ans, mx);
    }
    cout << ans << endl;
  } 
  return 0;
}