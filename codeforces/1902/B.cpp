#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int weak = 7;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int tt = 1;
    cin >> tt;
    while(tt--) {
     ll n, p, l, t;
     cin >> n >> p >> l >> t;
     ll task = (n + weak - 1) / weak;
     ll lo = 0, hi = n, ans;
     while(lo <= hi) {
      ll mid = (lo + hi) / 2;
      ll earn = l * (n - mid);
      earn += min(task , 2 * (n - mid)) * t;
      if(earn >= p) {
        ans = mid;
        lo = mid + 1;
      }
      else hi = mid - 1;
     }
     cout << ans << endl;
   }
  return 0;
}