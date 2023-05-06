#include<bits/stdc++.h>
using namespace std;

const int MIN = -1e9;
#define ll long long
int fx[] = {-1, 0, 1, 0};
int fy[] = {0, 1, 0, -1};
#define valid(rx,cy) rx>=0 && rx<n && cy>=0 && cy<m
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		bool vis[n + 10][m + 10];
		int g[n + 10][m + 10];
		memset(vis , 0 , sizeof(vis));
		memset(g , 0 , sizeof(g));
		std::vector<pair<int , int >> dorja;
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				cin >> g[i][j];
				if(g[i][j] != 0) dorja.push_back({i , j});
			}	
		}
		ll mx = MIN;
		ll f = 0;
		for(int i = 0 ; i < dorja.size(); i++) {
			int x = dorja[i].first;
			int y = dorja[i].second;
			if(!vis[x][y]) {
				queue<pair<int , int >> q;
				q.push({x , y});
				f = g[x][y];
				vis[x][y] = true;
				while(!q.empty()) {
					pair<int , int> u = q.front();
					q.pop();
					int a = u.first;
					int b = u.second;
					for(int i = 0; i < 4; i++) {
						int nx = a + fx[i];
						int ny = b + fy[i];
						if(valid(nx , ny) && g[nx][ny] != 0 && !vis[nx][ny]) {
							q.push({nx , ny});
							vis[nx][ny] = true;
							f += g[nx][ny];
							mx = max(mx, f);
						}
					}
				}
				mx = max(mx , f);
			}
		}

		if(mx != MIN )cout << mx << endl;
		else cout << 0 << endl;
	}
	return 0;
}