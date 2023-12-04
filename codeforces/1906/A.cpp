#include <bits/stdc++.h>
using namespace std;

const int N = 4;
string s[N];
bool vis[N][N];
vector<string> ans;

int di[] = {0, -1, 0, +1, -1, -1, +1, +1};
int dj[] = {+1, 0, -1, 0, +1, -1, -1, +1};
int n = 3, m = 3;
bool is_valid(int i, int j) {
  return i >= 0 and i < n and j >= 0 and j < m;
}
void dfs(int i, int j, int p, string t) {
  t[p] = s[i][j];
  if(p == 2) {
    ans.push_back(t);
    return;
  }
  vis[i][j] = true;
  for (int k = 0; k < 8; k++) {
      int nxt_i = i + di[k];
      int nxt_j = j + dj[k];
      if (is_valid(nxt_i, nxt_j) and !vis[nxt_i][nxt_j]) {
        dfs(nxt_i, nxt_j, p + 1, t);
      }
    }
  vis[i][j] = false;
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  for(int i = 0; i < n; i++) {
    cin >> s[i]; 
  }
  for(int i = 0; i < n; i++) {
   for(int j = 0; j < n; j++) {
      memset(vis, false, sizeof vis);
      dfs(i, j, 0,"abc");
    } 
  }
  sort(ans.begin(), ans.end());
  cout << ans.front() << endl;
  return 0;
}