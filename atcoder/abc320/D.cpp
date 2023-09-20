#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 2e5 + 9;

bool vis[N]; long long ax[N], ay[N];
vector<tuple<int, int, int>> g[N];

void dfs(int u, ll x, ll y) {
  vis[u] = true;
  ax[u] = x, ay[u] = y;
  for (auto [v, dx, dy]: g[u]) {
    if (!vis[v]) {
      dfs(v, x + dx, y + dy);
    }
  }
}
 
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  while (m--) {
    int u, v; cin >> u >> v;
    int x, y; cin >> x >> y;

    g[u].push_back({v, x, y});
    g[v].push_back({u, -x, -y});
  }

  dfs(1, 0, 0);

  for(int i = 1; i <= n; i++) {
  	if(!vis[i]) {
      cout << "undecidable" << endl;
    }
    else cout << ax[i] << " " << ay[i] << "\n";
  }

  return 0;
}