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
   int sum = (1 << 30) - 1, ans = 0;
   for(int i = 0; i < n; i++) {
     cin >> v[i];
     sum &= v[i];
     if(sum == 0) {
      ans++;
      sum = (1 << 30) - 1;
     }
   }
   cout << max(ans, 1) << endl;
 }
 return 0;
}