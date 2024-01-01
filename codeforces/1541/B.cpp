#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    std::vector<int> v(n);
    std::vector<int> mp(2 * n + 5, -1);
    for(int i = 0; i < n; i++) {
      cin >> v[i];
      mp[v[i]] = i + 1;
    }
    ll ans = 0; 
    for(ll i = 1; i <= 2 * n; i++) {
      for(ll j = i + 1; j <= 2 * n; j++) {
        if(i * j > 2 * n) break;
        if(mp[i] == -1 || mp[j] == -1) continue;
        if(i * j == mp[i] + mp[j]) {
          ans++;
        }
      }
    }
    cout << ans << endl;
  } 
  return 0;
}