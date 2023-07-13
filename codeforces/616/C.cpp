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
	int cnt = 1;
	std::set<pii> v;
	v.insert({s_1 , s_2});
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
			if(ty>=0 && ty<m && tx>=0 && tx<n && g[tx][ty] == '*')
			{
				vis[tx][ty] = true;
				v.insert({tx , ty});
			}
			else if(ty>=0 && ty<m && tx>=0 && tx<n && vis[tx][ty] == 0 &&  g[tx][ty] == '.') {
				q.push(pii(tx,ty));
				vis[tx][ty] = true;
				cnt++;
			}
		}
	}
	for(auto it : v) {
		ans[it.first][it.second] += cnt;
	}
}
int main() {
	
	scanf("%d%d",&n,&m);
	for(int i = 0; i < n; i++) {
		string s; cin >> s;
		for(int j = 0; j < m; j++) {
			g[i][j] = s[j];
			ans[i][j] = 0;
			vis[i][j] = false;
		}
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(!vis[i][j] && g[i][j] == '.') {
				bfs(i , j);
			}
		}
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(g[i][j] == '*') {
				printf("%d" , (ans[i][j] + 1) % 10);
			}
			else printf("."); 
		}
		printf("\n");
	}
	return 0;
}