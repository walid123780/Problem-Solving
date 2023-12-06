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
   std::vector<int> v[n + 1];
   for(int i = 0; i < n; i++) {
     int a, b;
     cin >> a >> b;
     v[a].push_back(b);
   }
   ll ans = 0;
   for(int i = 1; i <= n; i++) {
      sort(v[i].rbegin(), v[i].rend());
      for(int j = 0; j < min((ll)v[i].size(), (ll) i); j++) {
        ans += v[i][j];
      }
   }
   cout << ans << endl;
 }
 return 0;
}