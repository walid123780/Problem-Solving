#include<bits/stdc++.h>
using namespace std;
const int N = 1e4 + 69;
int main() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n , m;
		cin >> n >> m;
		std::vector<int> g[N];
		for(int i = 1; i <= m; i++) {
			int u, v;
			cin >> u >> v;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		int dist[N]; int vis[N];
		for(int i = 1 ; i <= n; i++) {
			memset(dist , 0 , sizeof dist);
			memset(vis , 0 , sizeof vis);
			int mx = 0;
			vector<int> ans;
			queue<int> q;
			q.push(i);
			vis[i] = 1;
			dist[i] = 0;
			while(!q.empty()) {
				int u = q.front();
				q.pop();
				int cnt = 0;
				for(auto v : g[u])  {
					if(!vis[v]) {
						dist[v] = dist[u] + 1;
						vis[v] = true;
						q.push(v);
						cnt ++;
						mx = max(mx , dist[v]);
					}	
				}
				if(cnt) ans.push_back (cnt);
			}
			if(mx == 2) {
				cout << ans[0]<< " "  << ans[1] << endl;
				break;
			}
		}
	}
	return 0;
}
