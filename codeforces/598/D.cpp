#include<bits/stdc++.h>
using namespace std;
const int N = 1006 + 9;
#define pii pair<int,int>
int  n , m;
char g[N][N];
bool vis[N][N];
int ans[N][N];
int fx[] = {-1, 0, 1, 0};
int fy[] = {0, 1, 0, -1};
void bfs(int s_1,int s_2)
{
	int cnt = 0;
	std::vector<pii> v;
	v.push_back({s_1 , s_2});
    queue<pii>q;
    q.push(pii(s_1,s_2));
    vis[s_1][s_2] = 1;
    while(!q.empty())
    {
        pii u = q.front();
        q.pop();
        for(int i = 0 ; i < 4; i++)
        {
            int tx = u.first + fx[i];
            int ty = u.second + fy[i];

            if(ty>=0 && ty<m && tx>=0 && tx<n && vis[tx][ty] == 0 &&  g[tx][ty] == '.')
            {
                q.push(pii(tx,ty));
                vis[tx][ty] = 1;
                v.push_back({tx , ty});
            }
            else if(ty>=0 && ty<m && tx>=0 && tx<n && g[tx][ty] == '*') {
            	cnt++;
            }
        }
    }
    for(int i = 0; i < v.size(); i++) {
    	ans[v[i].first][v[i].second] = cnt;
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int q;
    cin >> n >> m >> q;
   
    for(int i = 0; i < n; i++) {
    	string s; cin >> s;
    	for(int j = 0; j < m; j++) {
    		g[i][j] = s[j];
    	}
    }
    while(q--) {
    	int u, v, Pictures = 0;
    	cin >> u >> v;
    	u-- , v--;
    	if(!vis[u][v]) {
    		bfs(u , v);
    		Pictures = ans[u][v];
    	}
    	else {
    		Pictures = ans[u][v];
    	}
    	cout << Pictures << endl;
    }
    return 0;
}