#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    int n, m;
    cin >> n >> m;
    std::vector<int> l(n), r(n);
    for(int i = 0; i < n; i++) {
     cin >> l[i] >> r[i];
   }
   int ans = 0;
   vector<int> v = {1, m};
   for(auto it : v) {
    map<int, int> mp;
    for(int i = 0; i < n; i++) {
      if(it == l[i] or it == r[i]) continue;      
      mp[l[i]]++;
      mp[r[i] + 1]--;
    }
    int t = 0;
    for(auto [l, r] : mp) {
      t += r;
      ans = max(ans, t);
    }
  } 
  cout << ans << endl;
}
return 0;
}