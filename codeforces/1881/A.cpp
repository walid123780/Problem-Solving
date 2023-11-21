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
     string x, s;
     cin >> x >> s;
     int ans = 0, ok = 0;
     while(true) {
      size_t found = x.find(s);
      if (found != string::npos) {
        ok = 1;
        break;
      }
      if(x.size() >= 1000) {
        break;
      }
      x += x;
      ans++;
     }
    if(ok) cout << ans << endl;
    else cout << -1 << endl;
   }
  return 0;
}