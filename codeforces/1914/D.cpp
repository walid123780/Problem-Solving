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
    std::vector<pair<int, int>> a(n), b(n), c(n);
    for(int i = 0; i < n; i++) {
      int x;
      cin >> x;
      a[i].first = x;
      a[i].second = i;
    }
    for(int i = 0; i < n; i++) {
      int x;
      cin >> x;
      b[i].first = x; 
      b[i].second = i;
    }
    for(int i = 0; i < n; i++) {
     int x;
     cin >> x;
     c[i].first = x;
     c[i].second = i;
   }
   sort(a.begin(), a.end(), greater<pair<int, int>>());
   sort(b.begin(), b.end(), greater<pair<int, int>>());
   sort(c.begin(), c.end(), greater<pair<int, int>>());
   int ans = 0;
   for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
       for(int k = 0; k < 3; k++) {
         set<int>s;
         s.insert({a[i].second, b[j].second, c[k].second});
         if(s.size() == 3) {
          ans = max(ans, a[i].first + b[j].first + c[k].first);
         }
       }
     } 
   }
   cout << ans << endl;
 } 
 return 0;
}