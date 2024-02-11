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
   set<int> se;
   std::vector<int> v;
   for(int i = 0; i < n; i++) {
     int x;
     cin >> x;
     se.insert(x);
   }
   for(auto it : se) {
    v.push_back(it);
   }
   int length = n - 1, ans = 0;
   for(int i = 0; i < v.size(); i++) {
    int alpha = v[i] + length;
    int index = upper_bound(v.begin(), v.end(), alpha) - v.begin();
    ans = max(ans, index - i);
   }
   cout << ans << endl;
 }
 return 0;
}