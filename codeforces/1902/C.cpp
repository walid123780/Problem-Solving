#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf = 1e9;
int gcd(int a, int b){
    if(a == 0) return b;
    return gcd(b%a, a);
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    std::vector<int> v(n);
    for(int i = 0; i < n; i++) {
      cin >> v[i];
    }
    if(n == 1) {
      cout << 1 << endl;
      continue;
    }
    
    int GCD = 0;
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++) {
      GCD = gcd((v[n - 1] - v[i]), GCD); 
    }

    set<ll> s;
    ll ans = 0;
    for(int i = 0; i < n; i++) {
      ans += (v[n - 1] - v[i]) / GCD;
      s.insert((v[n - 1] - v[i]) / GCD); 
    }

    for(int i = 0; i < inf; i++) {
      if(s.find(i) == s.end()) {
        ans += i;
        break;
      }
    }
    cout << ans << endl;
  } 
  return 0;
}