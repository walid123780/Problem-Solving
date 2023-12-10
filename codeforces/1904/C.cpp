#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll inf = 1e18;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int n, k;
    cin >> n >> k;
    std::vector<ll> v(n);
    for(int i = 0; i < n; i++) {
      cin >> v[i];
    }
    if(k >= 3) {
      cout << 0 << endl;
      continue;
    }
    sort(v.begin(), v.end());
    ll ans = v[0];
    if(k == 1) {
      for(int i = 0; i < n - 1; i++) {
        ans = min(ans, (ll) v[i + 1] - v[i]);
      }
      cout << ans << endl;
      continue;
    }
    else {
      
      for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
           ll diff = v[j] - v[i];
           ans = min(ans, diff);
           auto id = lower_bound(v.begin(), v.end(), diff) - v.begin();
           if(id != n) {
            ans = min(ans, abs(diff - v[id]));
           }
           if(id != 0) {
            ans = min(ans, abs(diff - v[id - 1]));
           }
         } 
      }
    }
    cout << ans << endl;
  } 
  return 0;
}