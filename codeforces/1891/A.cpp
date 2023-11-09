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
   bool ok = true;
   for(int i = 0, p = 0; i < n; i++, p++) {
    int start = (1 << p);
    if(start > n) {
      break;
    }
    int end =  min(n, 1 << (p + 1));
    
    if(is_sorted(v.begin() + start, v.begin() + end) == 0) {
      ok = false;
    }
   }
   if(ok) {
      cout << "YES\n";
   }   
   else cout << "NO\n";
 }
 return 0;
}