#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int n, m;
    cin >> n >> m;
    int value = n;
    ll ans = 0; int cnt = 64;
    while(value and cnt--) {
      if(value >= m) {      
        value %= m;
      }
      else {
        ans += value;
        value *= 2;
      }
    }
    if(value) cout << -1 << endl;
    else cout << ans << endl;
  }   
  return 0;
}