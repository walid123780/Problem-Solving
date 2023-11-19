#include <bits/stdc++.h>
using namespace std;

const int inf = 1e9 + 7;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int n, m;
    cin >> n >> m;
    n %= m;
    int value = n;
    long long ans = 0, cnt = 0;
    while(value) {
      cnt++;
      if(cnt >= 64) break;
      ans += value;
      value *= 2;
      value %= m;
    }
    if(value)cout << -1 << endl;
    else cout << ans << endl;
  }   
  return 0;
}