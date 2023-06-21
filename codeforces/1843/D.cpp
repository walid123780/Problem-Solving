#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 2e5 + 69;
vector<int> g[N];
ll col[N]; bool vis[N];

void dfs(int u) {
	bool flag = false;
	vis[u] = true;
	for (auto v: g[u]) {	
			if (vis[v]) {
				continue;
			}
			flag = true;
			dfs(v);
			col[u] += col[v];
		}
		if(!flag) {
			col[u] = 1;
		}
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		for(ll i=0; i<=n; i++){
        g[i].clear(); col[i]=0; vis[i] = false;
    }
		for(int i = 1; i < n; i++) {
			int u, v; cin >> u >> v;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		dfs(1);
		int q;
		cin >> q;
		while(q--) {
			int u , v;
			cin >> u >> v;
			cout << col[u] * col[v] << endl;
		}
	}
	return 0;
}

