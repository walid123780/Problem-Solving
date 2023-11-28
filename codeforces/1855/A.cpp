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
   int sim = 1;
   for(int i = 0; i < n; i++) {
     if(v[i] == (i + 1)) {
      sim += 1;
     }
   }
   cout << sim / 2 << endl;
 }
 return 0;
}