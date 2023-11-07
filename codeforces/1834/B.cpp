#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    string s, t;
    cin >> s >> t;
    if(s.size() > t.size()) swap(s, t);
    string nt = string(t.size() - s.size(), '0') + s;
    s = nt;
    int ans = 0;
    for(int i = 0; i < s.size(); i++) {
      if(s[i] != t[i]) {
        ans = abs(s[i] - t[i]) + (s.size() - 1 - i) * 9;
        break;
      }
    }
    cout << ans << endl; 
  }
} 