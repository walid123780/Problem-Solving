#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
   int n, k;
   cin >> n >> k;
   std::vector<int> v(n);
   for(int i = 0; i < n; i += k) {
     v[i] = 1;
   }
   if(!v[n - 1]) v[n - 1] = 1;
   int ans = 0;
   for(int i = 0; i < n; i++) {
     ans += (v[i] ? 1 : 0);
   }
   cout << ans << "\n";
 }
 return 0;
}