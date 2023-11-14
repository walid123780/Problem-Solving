#include <bits/stdc++.h>
using namespace std;

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
    int n, k;
    cin >> n >> k;
    int ans = INT_MAX;
    map<int, int> mp;
    std::set<int> se;
    for(int j = 0; j < n; j++) {
      int x;
      cin >> x; se.insert(x);
      for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
          while (x % i == 0) {
            mp[i]++;
            x /= i;
          }
        }
      }
      if (x > 1) mp[x]++;    
    }
    if(k == 4) {
      ans = max(0 , (2 - mp[2]));
    }
    for(auto it : se) {
      int temp = it;
      while(gcd(it, k) != k) {
        it += 1;
      }
      it -= temp;
      ans = min(ans , it);
    }
    
    cout << ans << endl;
  }
  return 0;
}