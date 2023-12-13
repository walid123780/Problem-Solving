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
   std::vector<int> v(n);

   for(int i = 0; i < n; i++) {
     cin >> v[i];
   }
   std::vector<int> t = v;
   sort(v.begin(), v.end());
   int ans = 0;
   for(int i = 0; i < n; i++) {
     if(t[i] != v[i]) ans = max(ans, t[i]);
   }
   cout << ans << endl;
 }
 return 0;
}