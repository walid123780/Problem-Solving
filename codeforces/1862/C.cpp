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
   std::vector<int> v(n + 1, 0);
   for(int i = 1; i <= n; i++) {
     cin >> v[i];
   }
   if(v[1] != n) {
    cout << "No\n";
    continue;
   }
   std::vector<int> b(n + 1, 0);
   for(int i = 1; i <= n; i++) {
       b[v[i]]++;
   }
   bool ans = true;
   for(int i = n - 1; i >= 1; i--) {
     b[i] += b[i + 1];
   }
   if(b == v) {
    cout << "Yes\n";
   }
   else cout << "No\n";
 }
 return 0;
}