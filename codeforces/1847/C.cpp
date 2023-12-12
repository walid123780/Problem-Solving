#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
   int n;
   cin >> n;
   set<int> s = {0};
   for(int i = 0, p = 0; i < n; i++) {
     int x;
     cin >> x;
     s.insert(p ^= x);
   }
   int ans = 0;
   for(auto ai : s) {
    for(auto aj : s) {
      ans = max(ans, ai ^ aj);
    }
   }
   cout << ans << endl;
 }
 return 0;
}