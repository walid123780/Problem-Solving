#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int a, b, c;
    cin >> a >> b >> c;
    int d = b + c;
    int ans = 0;
    if(d < a) {
      ans = 2 * d + 1;
    }
    else {
      ans = 2 * a - 1;
    }
    cout << ans << endl;
  } 
  return 0;
}