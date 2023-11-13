#include <bits/stdc++.h>
using namespace std;

const int inf = 1e9 + 7; 
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int n; cin >> n;
    string s; cin >> s;
    std::vector<int> pos;
    for(int i = n - 1; i >= 0; i--) {
      if(s[i] == '0') {
        pos.push_back(n - i - 1);
      }
    }
    long long pos_id = 0, moves = 0, j = 0;
    std::vector<int> ans(n, -1);
    for(int i = 0; i < n; i++) {
      if(i < pos.size()) {
        moves += (pos[i]  - i);
        cout << moves << " ";
      }
      else cout << -1 << " ";
    }
    cout << endl;
  } 
  return 0;
}