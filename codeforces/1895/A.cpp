#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int x, y, k;
    cin >> x >> y >> k;
    int ans = 0;
    if(x >= y) ans = x;
    else if(x + k >= y) {
      ans = y;
    }
    else {
      int f = y - (x + k);
      ans = y + f;
    }
    cout << ans << endl;
  }
}