#include <bits/stdc++.h>
using namespace std;

const int inf = (1 << 30) - 1;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    int v[n][n];
    std::vector<int> ans(n, inf); 
    for(int i = 0; i < n; i++) {
      int an = inf, f = 0;
      for(int j = 0; j < n; j++) {
        cin >> v[i][j];
        if(i != j){
          ans[i] &= v[i][j]; 
          ans[j] &= v[i][j];
        } 
      }
    }

    bool not_ok = false;
    for(int i = 0; i < n; i++) {
     for(int j = 0; j < n; j++) {
      if(i == j) continue;
        if(v[i][j] != (ans[i] | ans[j])) {
          not_ok = true;
        }
      } 
    }
    if(not_ok) {
      cout << "NO\n";
    }
    else {
      cout << "YES\n";
      for(auto it : ans) {
        cout << it << " ";
      }
      cout << endl;
    }
  } 
  return 0;
}