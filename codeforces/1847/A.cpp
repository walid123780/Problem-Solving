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
   for(int i = 0; i < n; i++) {
     cin >> v[i];
   }
   std::vector<int> list;
   int ans = 0;
   for(int i = 1; i < n; i++) {
     int diff = abs(v[i] - v[i - 1]);
     list.push_back(diff);
     ans += diff;
   }
   sort(list.rbegin(), list.rend());
   int i = 0; k--;
   while(k--) {
    ans -= list[i++];
   }
   cout << ans << endl;
 }
 return 0;
}