#include <bits/stdc++.h>
using namespace std;

const int  inf = 1e9;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int n; string s;
    cin >> n >> s;
    s = '$' + s;
    std::vector<int> g[n + 5];
    std::vector<int> leaf;
    for(int i = 0; i < n; i++) {
      int l, r; 
      cin >> l >> r;
      if(!l and !r) leaf.push_back(i + 1);
      g[i + 1].push_back(l);
      g[i + 1].push_back(r);
    }
    queue<int> q;
    std::vector<int> d(n + 5, 0);
    q.push(1);
    d[1] = 0;
    while (!q.empty()) {
      int u = q.front();
      q.pop();
      int l = 0, r = 0;
      if(g[u].size() >= 1) {l = g[u][0]; if(l) q.push(l);}
      if(g[u].size() == 2) {r = g[u][1]; if(r) q.push(r);}
      if(s[u] == 'L') {
        if(r) d[r] = d[u] + 1;
        if(l) d[l] = d[u];
      } 
      if(s[u] == 'R') {
        if(l) d[l] = d[u] + 1;
        if(r) d[r] = d[u];
      }
      if(s[u] == 'U') {
        if(l) d[l] = d[u] + 1;
        if(r) d[r] = d[u] + 1;
      }
    }
    int ans = inf;
    for(auto it : leaf) {
      ans = min (ans, d[it]);
    }
    cout << ans << endl;
  }
  return 0;
}