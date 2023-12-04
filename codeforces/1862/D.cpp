#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    ll n;
    cin >> n;
    ll l = 0, r = 1e18, ans;
    while(l <= r) {
      __int128 mid = (l + r) / 2;
      __int128 val = (mid * (mid - 1)) / 2;
      if(val >= n) {
        ans = mid;
        // cout << ans << endl;
        r = mid - 1;
      }
      else l = mid + 1;
    }
    if((ans * (ans - 1)) / 2 > n) {
      ans -= 1;
      ll f = (ans * (ans - 1)) / 2;
      ans += n - f;
    }
    cout << ans << endl;
  } 
  return 0;
}
