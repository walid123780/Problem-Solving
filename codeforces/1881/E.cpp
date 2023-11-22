#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 7, inf = 1e9 + 7;
long long dp[N]; 
int n;vector<int> v(N); 
int rec(int i) {
  if(i == n + 1) return 0;
  if(i > n + 1) return inf;
  if(dp[i] != -1) return dp[i];
  int ans = rec(i + 1) + 1;
  ans = min(ans, rec(i + v[i] + 1));
  return dp[i] = ans;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin >> t;
  while(t--) {
    cin >> n;
    for(int i = 1; i <= n; i++) {
      cin >> v[i];   
    }
    memset(dp, -1, sizeof dp);
    cout << rec(1) << endl;
  }
  return 0;
}