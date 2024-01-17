#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int n, m;
    cin >> n >> m;
    string s[n];
    bool found = false;
    pair<int, int> pos;
    for(int i = 0; i < n; i++) {
      cin >> s[i];
      for(int j = 0; j < m; j++) {
        if(!found and s[i][j] == 'R') {
          pos.first = i;
          pos.second = j;
          found = true;
        }
      }
    }
    found = false;
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < pos.second; j++) {
         if(s[i][j] == 'R') {
          found = true;
         }
       } 
    }
    if(found) {
      cout << "NO\n";
    }
    else cout << "YES\n";
  } 
  return 0;
}