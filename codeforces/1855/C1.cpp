#include <bits/stdc++.h>
using namespace std;

const int inf = 22;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    std::vector<int> v(n);
    int mx = -inf, mx_pos;
    for(int i = 0; i < n; i++) {
      cin >> v[i];
      if(mx < v[i]) {
        mx = v[i];
        mx_pos = i;
      }
    }
    std::vector<pair<int, int>> ans;
    if(mx > 0) {
      while(v[mx_pos] < 20) {
        ans.push_back({mx_pos, mx_pos});
        v[mx_pos] <<= 1;
      }
      while(v[0] < 20) {
        ans.push_back({0, mx_pos});
        v[0] += v[mx_pos];
      }
      for(int i = 1; i < n; i++) {
        while(v[i] < v[i - 1]) {
          ans.push_back({i, i - 1});
          v[i] += v[i - 1];
        }
      }
    }
    else {
      for(int i = n - 2; i >= 0 ; i--) {
        ans.push_back({i, i + 1});
        v[i] += v[i + 1];
      }
    }
    cout << ans.size() << endl;
    for(auto it : ans) {
      cout << it.first + 1 << " " << it.second + 1 << endl;;
    }
  } 
  return 0;
}