#include<bits/stdc++.h>
using namespace std;

const int N = 20;

int h , w;
int grid[N][N];

int dx[2] = {1 , 0};
int dy[2] = {0 , 1};

set < int > visited;

int dfs(int x,int y){
	if(x == h && y == w) return 1;

	long long res = 0;
	visited.insert(grid[x][y]);

	for(int i = 0 ; i < 2; i++){
		int tx = x + dx[i];
		int ty = y + dy[i];

		if(tx <= h && ty <= w && visited.count(grid[tx][ty])== 0){
			res += dfs(tx,ty);
		}
	}
	visited.erase(grid[x][y]);
	return res ;

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin>>t;
    while(t--){	
    	cin >> h >> w;
    	for(int i = 1 ; i <= h; i++){
    		for(int j = 1; j <= w; j++){
    			cin>>grid[i][j];
    		}
    	}
    	long long ans = dfs(1,1);
    	cout << ans << endl;
    }
    return 0;
}