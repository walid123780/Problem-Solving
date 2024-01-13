#include <bits/stdc++.h>
using namespace std;

const int inf = 1e9 + 7;
#define ll long long
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    map<ll, bool> mp;

    ll u_l = inf, l_l = -inf;
    ll a_l = inf, a_u = -inf;

    for(int i = 0; i < n; i++) {
      ll a, b;
      cin >> a >> b; 
      if(a == 1) {
        l_l = max(l_l, b);
        a_l = min(a_l, b);
      }
      else if(a == 2) {
        u_l = min(u_l , b);
        a_u = max(a_u, b);
      }
      else {
        mp[b] = true;
      }
    }
    ll ans = 0;
    if(l_l <= u_l) {
      ans = u_l - l_l + 1;
      for(auto it : mp) {
        if(l_l <= it.first and u_l >= it.first) {
          ans--;
        }
      }
    }  
    cout << max(ans, 0LL) << endl;
  } 
  return 0;
}