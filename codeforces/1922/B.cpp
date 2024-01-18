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
    int v[n + 5];
    for(int i = 1; i <= n; i++) {
      cin >> v[i];
    }
    sort(v + 1, v + n + 1);
    
   
    /*for(auto [f , s] : mp) {
      ll t1 = (s * (s - 1)) / 2;
      ll t2 = max(0LL, s - 2);
      ans += ((others * t1) + (s * t2) + (t1 * mp1[f + 1]));
      others += s;
    }*/
     ll ans = 0, others = 0;
    map<ll, ll> mp;
    for(ll i = 1; i < n; i++) {
      mp[v[i]] += (i - 1);
      if(v[i] == v[i + 1]) {
        ans += mp[v[i]];
      }
    }
    cout << ans << endl;
  } 
  return 0;
}