#include <bits/stdc++.h>
using namespace std;

const int N = 4;
string s[N];
bool vis[N][N];
int di[] = {0, -1, 0, +1, -1, -1, +1, +1};
int dj[] = {+1, 0, -1, 0, +1, -1, -1, +1};
int n = 3, m = 3;
bool is_valid(int i, int j) {
  return i >= 0 and i < n and j >= 0 and j < m;
}
char minimum (int i, int j) {
  char mn = 'D'; 
  for (int k = 0; k < 8; k++) {
    int nxt_i = i + di[k];
    int nxt_j = j + dj[k];
    if (is_valid(nxt_i, nxt_j) and !vis[nxt_i][nxt_j]) {
     mn = min(mn, s[nxt_i][nxt_j]);
   }
 }
 return mn;
}
string  dfs(int i, int j) {
  char find = 'D';
  vis[i][j] = true;
  queue<pair<int, int>> q;
  string ans;
  ans = s[i][j];
  q.push({i, j});
  while (!q.empty()) {
    auto [i, j] = q.front();
    q.pop();
    char mn = minimum(i, j);
    if(ans.size() == 2) {
      find = min(mn, find);
      continue;
    }
    else if(ans.size() == 1) {
      ans += mn;      
    }
    for (int k = 0; k < 8; k++) {
      int nxt_i = i + di[k];
      int nxt_j = j + dj[k];
      if (is_valid(nxt_i, nxt_j) and s[nxt_i][nxt_j] == mn) {
        vis[i][j] = true;
        q.push(make_pair(nxt_i, nxt_j));
      }
    }
  }
  memset(vis, false, sizeof vis);
  return ans += find;
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  for(int i = 0; i < n; i++) {
    cin >> s[i]; 
  }
  std::vector<string> answer;
  for(int i = 0; i < n; i++) {
   for(int j = 0; j < n; j++) {
      answer.push_back(dfs(i, j));
    } 
  }
  sort(answer.begin(), answer.end());
  cout << answer.front() << endl;
  return 0;
}